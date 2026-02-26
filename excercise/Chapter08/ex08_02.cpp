// Q. CandyBar 구조체는 세 개의 멤버를 가지고 있다. 첫 번째 멤버는 캔디바의 상표명을 저장한다. 두 번째 멤버는 캔디바의 중량(소수부를 가질 수 있다)을 저장한다. 세 번째 멤버는 캔디바의 함유된 칼로리(정수값)를 저장한다.
// CandyBar에 대한 참조, char을 지시하는 포인터, double형, int형을 매개변수로 취하고, 마지막 세 매개변수의 값을 사용하여 구조체의 해당 멤버를 설정하는 프로그램을 작성하라.
// 마지막 세 매개변수는 "Millennium Munch", 2.85, 350의 디폴트 값을 가져야 한다. 또한 프로그램은 CandyBar에 대한 참조를 매개변수로 취하는 함수를 사용하여 구조체의 내용을 출력해야 한다. 필요하면 const를 사용하라.

#include <iostream>
#include <cstring>

const int ArSize = 50;

struct CandyBar
{
	char name[ArSize];
	double weight;
	int cal;
};

CandyBar fill_str(CandyBar&, const char str[] = "Millennium Munch", const double wei = 2.85, const int cal = 350);
void print(CandyBar&);

int main()
{
	CandyBar str_auto;
	CandyBar str_self;

	char name[ArSize];
	double weight;
	int cal;

	std::cout << "캔디바의 상호명을 입력하십시오: ";
	std::cin.getline(name, ArSize);

	std::cout << "캔디바의 중량을 입력하십시오: ";
	if (!(std::cin >> weight))
	{
		std::cout << "입력 오류가 있습니다.\n";

		return 1;
	}

	std::cout << "캔디바의 칼로리를 입력하십시오: ";
	if (!(std::cin >> cal))
	{
		std::cout << "입력 오류가 있습니다.\n";

		return 1;
	}

	fill_str(str_auto);
	fill_str(str_self, name, weight, cal);

	print(str_auto);
	print(str_self);

	std::cout << "프로그램을 종료합니다.\n";

	return 0;
}

CandyBar fill_str(CandyBar& candy, const char str[], const double wei, const int cal)
{
	std::strcpy(candy.name, str);
	candy.weight = wei;
	candy.cal = cal;

	return candy;
}

void print(CandyBar& candy)
{
	std::cout << "상호명: " << candy.name << std::endl;
	std::cout << "중  량: " << candy.weight << std::endl;
	std::cout << "칼로리: " << candy.cal << std::endl;
}