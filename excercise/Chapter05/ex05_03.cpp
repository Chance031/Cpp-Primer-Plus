// Q. 사용자에게 수를 입력하라고 요구하는 프로그램을 작성하라. 수를 입력할 때마다 프로그램은 그때까지 입력된 수들의 누계를 출력해야 한다. 사용자가 0을 입력하면 프로그램은 종료된다.

#include <iostream>

int main()
{
	int num = 0;
	int sum = 0;

	std::cout << "수를 입력하십시오(0을 입력시 종료됩니다): ";
	std::cin >> num;

	while (num != 0)
	{
		sum += num;
		std::cout << "현재까지 입력된 수의 누계는 " << sum << "입니다.\n";

		std::cout << "수를 입력하십시오(0을 입력시 종료됩니다): ";
		if (!(std::cin >> num))
		{
			std::cout << "숫자를 입력해 주십시오.\n";

			return 1;
		}
	}

	return 0;
}