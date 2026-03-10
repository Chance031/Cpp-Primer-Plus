// Q. 스톤 형식, 정수 파운드 형식, 부동소수점 파운드 형식 중에서 객체를 어느 것으로 해석할지를 결정하는 하나의 상태 멤버를 갖도록, Stonewt 클래스(Listing 11.16, 11.17)를 다시 작성하라. << 연산자를 오버로딩하여 show_stn()과 show_lbs()메서드를 대체하라.
// 덧셈, 뺄셈, 곱셈 연산자를 오버로딩하여 Stonewt 값들을 서로 더하고, 빼고, 곱할 수 있게 하라. 모든 클래스 메서드와 프렌드 함수를 사용하는 간단한 프로그램을 작성하여 그 클래스가 동작하는지 테스트하라. (stonewt2.h, stonewt2.cpp, stone2.cpp)

#include <iostream>
#include "stonewt2.h"

int main()
{
	Stonewt stone1(100);
	Stonewt stone2(100.0, Stonewt::INT_POUND);
	Stonewt stone3(100, 200.0, Stonewt::FLOAT_POUND);

	Stonewt result;

	result = stone1 + stone2;
	result.setmode(Stonewt::STONE);
	std::cout << "stone1 + stone2 = " << result << "(스톤 파운드 조합 형식)\n";

	result = stone1 - stone3;
	result.setmode(Stonewt::INT_POUND);
	std::cout << "stone1 - stone3 = " << result << "(정수 파운드 형식)\n";

	result = stone2 * stone3;
	result.setmode(Stonewt::FLOAT_POUND);
	std::cout << "stone2 * stone3 = " << result << "(부동소수점 파운드 형식)\n";

	std::cout << "프로그램을 종료합니다.\n";

	return 0;
}
