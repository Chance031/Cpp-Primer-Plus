// Q. 다음과 같은 클래스 선언이 있다고 가정하자
// [class Cow]
// [{]
// [private:]
// [	char name[20];]
// [	char* hobby;]
// [	double weight;]
// [public:]
// [	Cow();]
// [	Cow(const char* nm, const char* ho, double wt);]
// [	Cow(const Cow& c);]
// [	~Cow();]
// [	Cow& operator=(const Cow& c);]
// [	void ShowCow() const;	// Cow의 모든 데이터를 출력한다]
// [};]
// 이 클래스의 메서드들을 구현하고, 모든 멤버 함수를 사용하는 간단한 프로그램을 작성하라. (cow.h, cow.cpp, usecow.cpp)

#include <iostream>
#include "cow.h"

int main()
{
	Cow cow1("Jack", "sleep", 100.0);
	Cow cow2;

	cow1.ShowCow();
	cow2.ShowCow();

	cow2 = cow1;

	cow1.ShowCow();
	cow2.ShowCow();

	Cow cow3(cow2);

	cow2.ShowCow();
	cow3.ShowCow();

	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}