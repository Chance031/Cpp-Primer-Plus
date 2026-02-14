// Q. 고객 A는 단리 10%로 100,000원을 투자하였다. 따라서, 고객 A는 매년 원금의 10%인 10,000원을 이자 수익으로 얻는다.
// 이자 수익 = 0.10 x 원금
// 같은 기간 동안에 고객 B는 복리 5%로 100,000원을 투자하였다. 따라서, 고객 B가 매년 얻는 이자 수익은 전년도 원리금의 5%이다.
// 이자 수익 = 0.05 x 전년도 원리금
// 고객 B는 1년 후 100,000원의 5%인 5,000원을 이자 수익으로 얻게 되므로 원리금이 105,000원이 된다. 2년 후에는 전년도 원리금 105,000원의 5%인 5,250원을 이자 수익으로 얻게 된다.
// 고객 B의 투자 가치가 고객 A의 투자 가치를 초과하는 년 수를 계산하고, 그때 두 사람의 투자 가치를 함께 출력하는 프로그램을 작성하라.

#include <iostream>

const double SIMPLE_INTEREST = 0.10;
const double COMPOUND_INTEREST = 0.05;

int main()
{
	const double WON = 100000;
	double A = WON;
	double B = WON;
	int years = 0;
	double interest = 0;

	do
	{
		interest = SIMPLE_INTEREST * WON;
		A += interest;

		interest = COMPOUND_INTEREST * B;
		B += interest;

		std::cout << ++years << "년차:\n" << "A: " << A << "원\nB: " << B << "원\n\n";
	} while (A > B);

	std::cout << "고객 B의 투자 가치가 고객 A의 투자 가치를 초과하는 년 수는 " << years << "년 입니다.\n";

	return 0;
}