// Q. 섭씨 온도를 매개변수로 전달받아 화씨 온도로 환산하여 리턴하는 사용자 정의 함수를 main() 함수가 호출하는 프로그램을 작성하시오. 프로그램은 섭씨 온도로 입력할 것을 요구해야 하고, 다음과 같은 실행 결과를 출력해야 한다.
// [섭씨 온도를 입력하고 Enter 키를 누르십시오: 20]
// [섭씨 20도는 화씨 68도입니다.]
// 참고로, 섭씨 온도를 화씨 온도로 변환하는 공식은 다음과 같다.
// 화씨 온도 = 1.8X섭씨 온도 +32.0

#include <iostream>

double CelsiusToFahrenheit(double celsius);

int main()
{
	double celsius;

	std::cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
	if (!(std::cin >> celsius))
	{
		std::cout << "정확한 온도를 입력해 주십시오." << std::endl;
		return 1;
	}

	double fahrenheit = CelsiusToFahrenheit(celsius);

	std::cout << "섭씨 " << celsius << "도는 화씨 " << fahrenheit << "도입니다." << std::endl;

	return 0;
}

double CelsiusToFahrenheit(double celsius)
{
	return 1.8 * celsius + 32.0;
}