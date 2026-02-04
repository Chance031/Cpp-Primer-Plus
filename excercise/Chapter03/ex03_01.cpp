// Q. 키를 정수형 센티미터 단위로 묻고 그 값을 미터와 센티미터 단위로 변환하는 간단한 프로그램을 작성하라. 입력해야 할 곳을 사용자에게 지시하기 위해 밑줄 문자를 사용하고 환산 인수로 const 기호 상수를 사용하라.

#include <iostream>

int main()
{
	int height_cm;

	const int CM_PER_M = 100;

	std::cout << "키를 입력하시오(센티미터 단위): ___\b\b\b";
	if (!(std::cin >> height_cm))
	{
		std::cout << "숫자를 입력하십시오.";
		return 1;
	}

	int meters = height_cm / CM_PER_M;
	int centimeters = height_cm % CM_PER_M;

	std::cout << "키는 " << meters << "미터 " << centimeters << "센티미터입니다." << std::endl;

	return 0;
}