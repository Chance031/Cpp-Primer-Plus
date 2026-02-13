// Q. Listing 5.4 프로그램을 array 객체와 long double 형을 사용하여 수정하라. 100!의 값은 무엇인가?

#include <iostream>
#include <array>

int main()
{
	std::array <long double, 101> factorials;

	factorials[1] = factorials[0] = 1.L;
	for (int i = 2; i <= 100; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i <= 100; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
	return 0;
}