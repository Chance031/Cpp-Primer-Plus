// Q. 6개의 관계 연산자 모두를 오버로딩하여 Stonewt 클래스(Listing 11.16, 11.17)를 다시 작성하라. 그 관계 연산자들은 pounds 멤버들을 비교하고 bool형의 값을 리턴해야 한다. 6개의 Stonewt 객체로 이루어진 배열을 선언하고, 배열 선언에서 처음 3개의 객체를 초기화하는 프로그램을 작성한다.
// 프로그램은 나머지 비어 있는 3개의 배열 원소를 설정하기 위해 루프를 사용하여 값들을 읽어야 한다. 그러고 나서 최대 원소, 최소 원소, 11스톤보다 크거나 같은 원소의 개수를 보고해야 한다. 
// (가장 간단한 방법은 11스톤으로 초기화된 Stonewt 객체를 하나 생성하고, 그 객체와 다른 객체들을 비교하는 것이다.) (stonewt3.h, stonewt3.cpp, stone3.cpp)

#include <iostream>
#include "stonewt3.h"

const int ArSize = 6;

int main()
{
	Stonewt stone[ArSize] = { Stonewt(5.0), Stonewt(10.0), Stonewt(15.0) };
	double temp;

	std::cout << "stone의 pound값을 입력해 주시기 바랍니다.\n";
	for (int i = 3; i < ArSize; ++i)
	{
		std::cout << i + 1 << "번째 : ";
		std::cin >> temp;
		stone[i] = Stonewt(temp);
	}

	Stonewt max = stone[0];
	Stonewt min = stone[0];
	Stonewt stone_11(11, 0.0);
	int upper = 0;

	for (int i = 0; i < ArSize; ++i)
	{
		if (stone[i] > max)
			max = stone[i];
		if (stone[i] < min)
			min = stone[i];
		if (stone[i] >= stone_11)
			upper++;
	}

	std::cout << "최대 원소: ";
	max.show_lbs();
	std::cout << "최소 원소: ";
	min.show_lbs();
	std::cout << "11스톤보다 크거나 같은 원소의 개수: " << upper << "개\n";

	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}