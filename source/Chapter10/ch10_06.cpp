// usestock1.cpp -- Stock 클래스를 사용한다
// stock 10.cpp와 컴파일한다
#include <iostream>
#include "ch10_04.h"

int main()
{
	{
		using std::cout;
		cout << "생성자를 사용하여 새로운 객체들을 생성한다\n";
		Stock stock1("NanoSmart", 12, 20.0);					// 구문 1
		stock1.show();
		Stock stock2 = Stock("Boffo objects", 2, 2.0);			// 구문 2
		stock2.show();

		cout << "stock1을 stock2에 대입한다.\n";
		stock2 = stock1;
		cout << "stock1과 stock2를 출력한다.\n";
		stock1.show();
		stock2.show();

		cout << "생성자를 사용하여 객체를 재설정한다.\n";
		stock1 = Stock("Nifty Foods", 10, 50.0);				// 임시 객체
		cout << "갱신된 stock1:\n";
		stock1.show();
		cout << "프로그램을 종료합니다.\n";
	}
	return 0;
}