// Q. 주행한 거리를 마일 단위로, 소비한 휘발유의 양을 갤런 단위로 묻고, 갤런당 마일 수를 보고하는 프로그램을 작성하라. 또는 주행한 거리를 킬로미터 단위로, 소비한 휘발유의 양을 리터 단위로 묻고, 유럽 스타일로 100킬로미터당 리터 수를 보고하는 프로그램을 작성하라.

#include <iostream>

int main()
{
	double miles, gallons;

	std::cout << "주행한 거리를 마일 단위로 입력하시오: ";
	if (!(std::cin >> miles))
	{
		std::cout << "숫자를 입력하시오." << std::endl;

		return 1;
	}

	std::cout << "소비한 휘발유의 양을 갤런 단위로 입력하시오: ";
	if (!(std::cin >> gallons))
	{
		std::cout << "숫자를 입력하시오." << std::endl;

		return 1;
	}

	double miles_gallons = miles / gallons;

	std::cout << "갤런당 " << miles_gallons << "마일 입니다." << std::endl;

	return 0;
}