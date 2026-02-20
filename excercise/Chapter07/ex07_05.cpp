// Q. 하나의 정수를 매개변수로 취하고, 그 매개변수의 계승(팩토리얼)을 리턴하는 재귀 함수를 정의하라. 3의 계승은 3!이라 쓰고, 3*2!과 같다. 0!은 1로 정의한다. 일반적으로 n이 0보다 클 때, n! = n * (n-1)!이다.
// 사용자가 다양한 값들을 입력하면 그 값들의 계승을 계산하여 보고하는 프로그램을 루프를 사용하여 작성하고, 그 함수를 테스트하라.

#include <iostream>

long long factorial(int);

int main()
{
	int n = 0;
	int value = 1;
	int* pValue = &value;

	std::cout << "하나의 정수를 입력해주십시오: ";
	if (!(std::cin >> n))
	{
		std::cout << "숫자를 입력해 주십시오.\n";

		return 1;
	}

	if (n == 0)
	{
		std::cout << n << "! = 1";
	}
	else if (n > 0)
	{
		std::cout << n << "! = ";

		std::cout << "= " << factorial(n) << std::endl;
	}
	else
	{
		std::cout << "범위에 오류가 있습니다.\n";
	}

	std::cout << "\n프로그램을 종료합니다.\n";

	return 0;
}

long long factorial(int n)
{
	std::cout << n << " ";

	if (n <= 1)	return 1;
	else
	{
		std::cout << "* ";
		return n * factorial(n - 1);
	}
}