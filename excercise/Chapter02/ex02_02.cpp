// Q. 거리에 대해 마일 단위로 입력을 요구하고, 그것을 킬로미터 단위로 환산하는 프로그램을 작성하시오. (1마일은 1.60934 킬로미터이다.)

#include <iostream>

int main()
{
	double  miles, km;

	const double MILES_TO_KM = 1.60934;

	std::cout << "거리를 마일(miles) 단위로 입력하십시오: ";

	if (!(std::cin >> miles))
	{
		std::cout << "올바른 숫자를 입력해주세요." << std::endl;
		return 1;
	}

	km = miles * MILES_TO_KM;

	std::cout << miles << "miles는 " << km << "km 입니다." << std::endl;
	return 0;
}