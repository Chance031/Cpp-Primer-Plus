// Q. 프로그래밍 연습 1을 다시 하되, 이번에는 두 클래스에 의해 관리되는 다양한 문자열들을 저장하기 위해, 고정 크기 배열 대신에 동적 메모리 대입을 사용하라. (classic1.h, classic1.cpp, pe13-02.cpp)

#include <iostream>
#include "classic1.h"

void Bravo(const Cd& disk);

int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;

	std::cout << "객체를 직접 사용한다:\n";
	c1.Report();
	c2.Report();

	std::cout << "객체를 지시하는 Cd * 포인터를 사용한다:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	std::cout << "Cd 참조 전달인자를 사용하여 함수를 호출한다:\n";
	Bravo(c1);
	Bravo(c2);

	std::cout << "대입을 테스트한다:\n";
	Classic copy;
	copy = c2;
	copy.Report();

	return 0;
}

void Bravo(const Cd& disk)
{
	disk.Report();
}
