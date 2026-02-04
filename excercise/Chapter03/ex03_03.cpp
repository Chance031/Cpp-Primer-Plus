// Q. 위도를 도각, 분각, 초각 단위로 요청하여, 10진수 형식으로 출력하는 프로그램을 작성하라. 1분각은 60초각이다. 1도각은 60분각이다. 이들을 기호 상수로 표현하라. 각각의 입력 값을 위해 별개의 변수를 사용해야 한다. 실행 예는 다음과 같아야 한다.
// [위도를 도, 분, 초 단위로 입력하십시오: ]
// [먼저, 도각을 입력하십시오: 37]
// [다음에, 분각을 입력하십시오: 51]
// [끝으로, 초각을 입력하십시오: 19]
// [37도, 51분, 19초 = 37.8553도]

#include <iostream>

int main()
{
	int degrees;
	int minutes;
	int seconds;

	const double MINUTS_PER_DEGREE = 60;
	const double SECONDS_PER_MINUTES = 60;

	std::cout << "위도를 도, 분, 초 단위로 입력하십시오: " << std::endl;
	std::cout << "먼저, 도각을 입력하십시오: ";
	if (!(std::cin >> degrees))
	{
		std::cout << "숫자를 입력해 주십시오." << std::endl;
		
		return 1;
	}
	std::cout << "다음에, 분각을 입력하십시오: ";
	if (!(std::cin >> minutes))
	{
		std::cout << "숫자를 입력해 주십시오." << std::endl;

		return 1;
	}
	std::cout << "끝으로, 초각을 입력하십시오: ";
	if (!(std::cin >> seconds))
	{
		std::cout << "숫자를 입력해 주십시오." << std::endl;

		return 1;
	}

	double latitude = degrees + (minutes + seconds / SECONDS_PER_MINUTES) / MINUTS_PER_DEGREE;

	std::cout << degrees << "도, " << minutes << "분, " << seconds << "초 = " << latitude << "도" << std::endl;

	return 0;
}