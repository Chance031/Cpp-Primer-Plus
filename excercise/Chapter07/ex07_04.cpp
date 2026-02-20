// Q. 시에서 운영하는 대부분의 로토 복권은 Listing 7.4에서 설명한 간단한 복권 시스템을 변형한 것들이다. 이러한 변형 복권 시스템에서는, 사용자가 수의 범위를 정하고, 그 집합에서 몇 개의 수를 뽑을 수 있다. 예를 들면, 1~47 범위를 정하고 5개의 수를 뽑을 수 있다.
// 또한 1~27과 같은 두 번째 범위를 정하고 (메가 수 또는 파워 볼이라고 부르는) 하나의 수를 뽑을 수 있다. 그랑프리를 타려면 뽑아 낸 모든 수가 들어맞아야 한다. 승률은 범위에 속하는 모든 수를 바르게 뽑을 확률가, 메가 수를 바르게 뽑을 확률을 곱한 것이다.
// 즉, 47개의 수에서 5개의 수를 바르게 뽑을 확률과, 27의 수에서 1개의 수를 바르게 뽑을 확률을 곱한 것이다. 이러한 종류의 변형 복권 시스템의 승률을 계산할 수 있도록 Listing 7.4를 수정하라.

#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main()
{
	double total, choices;

	double first = 0.0;
	double second = 0.0;

	for (int i = 0; i < 2; ++i)
	{
		std::cout << "전체 수의 개수와 뽑을 수의 개수를 입력하십시오: ";

		if (!(std::cin >> total >> choices))
		{
			std::cout << "숫자를 입력하십시오.\n";

			return 1;
		}

		if (i == 0)
			first = probability(total, choices);
		else
			second = probability(total, choices);
	}

	std::cout << "그랑프리를 탈 확률은 ";
	std::cout << first * second;
	std::cout << "분의 1입니다.\n";

	std::cout << "프로그램을 종료합니다.\n";

	return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}
