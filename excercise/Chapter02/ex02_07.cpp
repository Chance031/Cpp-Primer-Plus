// Q. 시간 값과 분 값의 입력을 사용자에게 요청하는 프로그램을 작성하라. main() 함수는 이 두 값을 void형 함수에 전달한다. 그 void형 함수는 다음과 같은 실행 예가 보여 주는 형식으로 두 값을 표시한다.
// [시간 값을 입력하시오: 9]
// [분 값을 입력하시오: 28]
// [시각: 9:28]

#include <iostream>

void DisplayTime(int hours, int minutes);

int main()
{
	int hours, minutes;

	std::cout << "시간 값을 입력하시오: ";
	if (!(std::cin >> hours))
	{
		std::cout << "올바른 숫자 형식이 아닙니다." << std::endl;
		return 1;
	}
	std::cout << "분 값을 입력하시오: ";
	if (!(std::cin >> minutes))
	{
		std::cout << "올바른 숫자 형식이 아닙니다." << std::endl;
		return 1;
	}

	if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59)
	{
		std::cout << "유효하지 않은 시간 범위입니다." << std::endl;
		return 1;
	}

	DisplayTime(hours, minutes);

	return 0;
}

void DisplayTime(int hours, int minutes)
{
	std::cout << "시각: " << hours << ":" << minutes << std::endl;
}