// Q. 휘발유 소비량을 유럽 스타일(100킬로미터당 리터 수)로 묻고, 미국 스타일(갤런당 마일 수)로 변환하는 프로그램을 작성하라. 두 스타일은 측정 단위가 서로 다를뿐만 아니라, 미국 스타일(거리/연료)은 유럽 스타일(연료/거리)의 역수이다.
// 여기서 100킬로미터는 62.14마일이고, 1갤런은 3.875리터이다. 그러므로 19mpg(miles per gallon)는 약 12.4liters/100km이고, 27mpg는 약 8.7liters/100km이다.

#include <iostream>

int main()
{
	double liters_per_100km;

	const double MILES_PER_100KM = 62.14;
	const double LITERS_PER_GALLON = 3.875;

	std::cout << "휘발유 소비량을 유럽 스타일(100킬로미터당 리터 수)로 입력하시오: ";
	if (!(std::cin >> liters_per_100km))
	{
		std::cout << "숫자를 입력하시오." << std::endl;
		return 1;
	}

	double miles_per_gallon = MILES_PER_100KM / (liters_per_100km / LITERS_PER_GALLON);

	std::cout << "미국 스타일(갤런당 마일 수)로 변환한 값은 " << miles_per_gallon << "mpg 입니다." << std::endl;

	return 0;
}