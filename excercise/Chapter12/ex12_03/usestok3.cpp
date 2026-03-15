// Q. 10장에 나오는 Listing 10.7과 Listing 10.8에서 설명한, Stock 클래스를 다시 작성하라. string 클래스 객체를 사용하지 말고, 동적으로 대입되는 메모리를 직접 사용하여 보유 주식의 회사명을 저장하라. 또한 Show() 멤버 함수를 오버로딩된 operator<<() 정의로 대체하라.
// 그리고 Lising 10.9를 사용하여 새로 정의한 것들이 바르게 동작하는지 테스트하라. (stock3.h, stock3.cpp, usestok3.cpp)

#include <iostream>
#include "stock3.h"

const int STKS = 4;

int main()
{
	Stock stocks[STKS] = {
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
	};

	std::cout << "보유 주식 리스트:\n";
	int st;

	for (st = 0; st < STKS; st++)
		std::cout << stocks[st];
	
	const Stock* top = &stocks[0];
	for (st = 1; st < STKS; st++)
		top = &top->topval(stocks[st]);

	
	std::cout << "\n최고 가치의 주식:\n";
	std::cout << *top;

	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}