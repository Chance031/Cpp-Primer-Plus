// Q. Society for the Preservation of Rightful Influence에 대한 기부금을 추적하는 프로그램을 작성하라. 프로그램은 사용자에게 기부할 사람이 몇 사람인지 묻는다. 그러고 나서 기부자의 이름과 기부금을 차례로 입력할 것을 요구한다.
// 그러한 정보는 동적으로 대입된 구조체 배열에 저장된다. 각각의 구조체는 두 개의 멤버를 가진다. 하나는 기부자의 이름을 저장하는 char형 배열(또는 string 객체)이고, 다른 하나는 기부금을 저장하는 double형 멤버이다.
// 데이터를 다 읽은 후에, 프로그램은 $10,000 또는 그 이상을 기부한 사람들에 대해서 기부자의 이름과 기부금을 나란히 표시하되, 이 목록의 위에 "고액 기부자"라는 제목을 붙인다.
// 그러고 나서, 프로그램은 나머지 기부자들의 목록을 이어서 표시하되, 이 목록의 위에는 "소액 기부자"라는 제목을 붙인다. 목록에 기부자가 없다면 "기부자가 없습니다."라는 메시지를 표시한다. 목록을 출력할 때 소팅(sorting)할 필요는 없다.

#include <iostream>
#include <string>

struct donator
{
	std::string name;
	double donation;
};

int main()
{
	int person = 0;
	int count = 0;

	std::cout << "기부할 사람은 몇 사람입니까? ";
	if (!(std::cin >> person))
	{
		std::cout << "숫자를 입력하시지 않으셨습니다.\n";

		return 1;
	}

	donator* don = new donator[person];

	for (int i = 0; i < person; ++i)
	{
		std::cout << "이름을 입력하십시오: ";
		std::cin >> don[i].name;
		std::cout << "기부금을 입력하십시오: ";
		if (!(std::cin >> don[i].donation))
		{
			std::cout << "숫자를 입력하지 않았습니다.\n";

			return 1;
		}
	}

	std::cout << "고액 기부자\n";

	for (int i = 0; i < person; ++i)
	{
		if (don[i].donation >= 10000)
		{
			std::cout << don[i].name << "\n";
			count++;
		}
	}

	if (count == 0)
		std::cout << "기부자가 없습니다.\n\n";

	count = 0;

	std::cout << "저액 기부자\n";

	for (int i = 0; i < person; ++i)
	{
		if (don[i].donation < 10000)
		{
			std::cout << don[i].name << "\n";
			count++;
		}
	}

	if (count == 0)
		std::cout << "기부자가 없습니다.\n\n";

	delete[] don;
	return 0;
}