// Q. 쌍을 이루는 두 수를 반복해서 입력할 것을 사용자에게 요구하는 프로그램을 작성하라. 쌍을 이루는 두 수 중에 적어도 어느 하나가 0으로 입력될 때까지 입력은 계속된다. 프로그램은 각 쌍에 대하여 두 수의 조화평균을 계산하는 함수를 사용한다.
// 그 함수는 계산 결과를 main()에 리턴해야 하고, main()은 그 결과를 보고해야 한다. 두 수의 조화평균은 역수들의 평균을 구한 다음, 다시 그것의 역수를 취하면 된다. 조화평균은 다음과 같은 공식으로 구할 수 있다.
// [조화평균 = 2.0 * x * y / (x + y)]

#include <iostream>

double harmonic_mean(double, double);

int main()
{
	double x = 0;
	double y = 0;

	while (true)
	{
		std::cout << "숫자 두개를 입력하십시오: ";
		if (!(std::cin >> x >> y))
		{
			std::cout << "숫자를 입력하지 않았습니다.\n";

			return 1;
		}

		if (x == 0 || y == 0)
		{
			std::cout << "x 또는 y의 값에 0이 입력되었습니다.\n";
			break;
		}

		std::cout << x << "와 " << y << "의 조화평균은 " << harmonic_mean(x, y) << "입니다.\n";
	}
	std::cout << "프로그램을 종료합니다.\n";

	return 0;
}

double harmonic_mean(double x, double y)
{
	return (2.0 * x * y / (x + y));
}