// Q. Listing 7.7에서 세 개의 배열 처리 함수가 범위를 나타내는 두 개의 포인터 매개변수를 사용하도록 수정하라. 실제로 입력받은 개수를 리턴하는 대신에, fill_array() 함수는 배열에서 마지막으로 채워진 곳 바로 다음 위치를 지시하는 포인터를 리턴해야 한다.
// 다른 두 함수는 이 포인터를 두 번째 매개변수로 사용하여 데이터의 끝을 판단해야 한다.

#include <iostream>

const int Max = 5;

double* fill_array(double*, double*);
void show_array(const double*, const double*);
void revalue(double*, double*);

int main()
{
	double properties[Max];

	double* ar_size = fill_array(properties, properties + Max);
	
	show_array(properties, ar_size);

	if (properties != ar_size)
	{
		revalue(properties, ar_size);
		show_array(properties, ar_size);
	}

	std::cout << "프로그램을 종료합니다.\n";
	std::cin.get();
	std::cin.get();

	return 0;
}

double* fill_array(double* begin, double* end)
{
	double temp;
	double* pt;

	for (pt = begin; pt < end; pt++)
	{
		std::cout << (pt - begin + 1) << "번 부동산의 가격: $";
		
		if (!(std::cin >> temp))
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "입력 불량; 입력 과정을 끝내겠습니다.\n";
			break;
		}
		else if (temp < 0)
			break;
		*pt = temp;
	}
	return pt;
}

void show_array(const double* begin, const  double* end)
{
	for (const double* pt = begin; pt < end; ++pt)
	{
		std::cout << (pt - begin + 1) << "번 부동산: $";
		std::cout << *pt << std::endl;
	}
}

void revalue(double* begin, double* end)
{
	std::cout << "재평가율을 입력하십시오: ";

	double factor;

	while (!(std::cin >> factor))
	{
		std::cin.clear();
		while (std::cin.get() != '\n')
			continue;
		std::cout << "잘못 입력했습니다, 수치를 입력하세요: ";
	}

	for (double* pt = begin; pt < end; ++pt)
	{
		*pt *= factor;
	}
}