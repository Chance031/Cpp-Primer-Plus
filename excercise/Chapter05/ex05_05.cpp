// Q. C++ for Fools라는 책을 팔고 있다. 1년 간의 월간 판매량을 (금액이 아니라 권수로) 입력 받는 프로그램을 작성하라. char *형의 배열을 사용하여 (또는 원한다면, string 객체의 배열을 사용하여) 월 이름을 초기화한다. 
// 루프를 사용하여 월 이름을 나타내는 프롬프트를 표시하고, 입력받은 월간 판매량을 int형의 배열에 저장한다. 배열 내용의 합계를 계산하고, 그 해의 연간 총 판매량을 출력한다.

#include <iostream>

const int MONTH = 12;

int main()
{
	char* month[MONTH] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec" };
	int sales[MONTH] = { 0 };
	int total = 0;

	std::cout << "1년간 월간 판매량을 입력하십시오:" << std::endl;

	for (int i = 0; i < MONTH; ++i)
	{
		std::cout << month[i] << ":	";
		if (!(std::cin >> sales[i]))
		{
			std::cout << "숫자를 입력하십시오." << std::endl;

			return 1;
		}
	}

	std::cout << std::endl;
	std::cout << "1년간 월간 판매량은" << std::endl;

	for (int i = 0; i < MONTH; ++i)
	{
		std::cout << month[i] << ":	" << sales[i] << std::endl;

		total += sales[i];
	}

	std::cout << "연간 총 판매량은 " << total << "입니다." << std::endl;

	return 0;
}