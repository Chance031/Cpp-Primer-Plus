// Q. 9장의 프로그래밍 연습 4를 다시 하라. 그러나 거기에 있는 Sales 구조체와 관련 함수들을, 클래스와 메서드로 바꾸어라. setSales(Sales&, double[], int) 함수를 생성자로 대체하라.
// setSales(Sales&) 대화식 메서드를 생성자를 사용하여 구현하라. 그 클래스를 이름 공간 SALES 안에 넣어라. (namesp.h, namesp.cpp, usenmsp.cpp)

#include <iostream>
#include "namesp.h"

int main()
{
	double arr[SALES::QUARTERS] = { 1000.0, 2000.0, 3000.0, 4000.0 };
	SALES::Sales first_sales;
	SALES::Sales second_sales(arr, SALES::QUARTERS);

	first_sales.showSales();
	second_sales.showSales();

	first_sales.setSales();

	first_sales.showSales();
	second_sales.showSales();

	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}