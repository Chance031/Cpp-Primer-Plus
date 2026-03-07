// Q. 다음과 같은 구조체 선언이 있다고 가정하자.
// [struct customer {]
// [	char fullname[35];]
// [	double payment;]
// [};]
// 고객들을 나타내는 구조체들을 스택에 추가하고 삭제하는 프로그램을, Stack 클래스 선언을 이용하여 작성하라. 고객이 삭제될 때마다, 그 고객이 지불한 금액을 총 수입에 추가해야 하고, 그 총 수입을 보고해야 한다. Stack 클래스를 변경하지 않고 그대로 사용해야 한다.
// 다만 typedef 선언을 변경하여, Item을 unsigned long 대신에 customer형이 되게하라. (stack.h, stack.cpp, usestack.cpp)

#include <iostream>
#include <cstring>
#include <cctype>
#include "stack.h"

int main()
{
	Stack st;
	char c;
	Item client;
	double running_total = 0;

	std::cout << "고객을 추가하려면 A, 고객을 삭제하려면 D, \n" << "종료하려면 Q를 입력하십시오.\n";

	while (std::cin >> c && toupper(c) != 'Q')
	{
		while (std::cin.get() != '\n')
			continue;

		if (!isalpha(c))
		{
			std::cout << '\a';
			continue;
		}

		switch (c)
		{
		case 'A':
		case 'a': std::cout << "추가할 고객의 이름을 입력하십시오: ";
			std::cin.get(client.fullname, 35);
			std::cout << "이 고객이 지불할 금액을 입력하십시오: ";
			std::cin >> client.payment;
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;

			if (st.isfull())
				std::cout << "스택이 가득 차 있습니다.\n";
			else
				st.push(client);
			break;
		case 'D':
		case 'd': if (st.isempty())
			std::cout << "스택이 비어 있습니다.\n";
				else {
			st.pop(client);
			std::cout << client.fullname << " 고객을 삭제했습니다.\n";
			running_total += client.payment;
			std::cout << "지금까지의 모든 고객이 지불한 총 금액은 " << running_total << "원입니다.\n";
		}
				break;
		}

		std::cout << "고객을 추가하려면 A, 고객을 삭제하려면 D, \n" << "종료하려면 Q를 입력하십시오.\n";
	}

	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}