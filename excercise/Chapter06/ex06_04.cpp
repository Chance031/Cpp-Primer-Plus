// Q. Benevolent Order of Programmers라는 회원제 인터넷 사이트에서는 실명이나 직함 또는 BOP 아이디로 자신을 나타낼 수 있다. 회원 명부를 실명으로, 직함으로, BOP 아이디로, 또는 가입 회원이 지정한 방식에 따라 열람하는 프로그램을 작성하라. 다음과 같은 구조체에 기초하여 프로그램을 작성하라.
// [// Benevolent Order of Programmers 회원 구조체]
// [struct bop {]
// [	char fullname[strsize];				// 실명]
// [	char title[strsize];				// 직함]
// [	char bopname[strsize];				// BOP 아이디]
// [	int preference;						// 0 = fullname, 1 = title, 2 = bopname]
// [};]
// 이 구조체의 작은 배열을 만들고, 적당한 값으로 배열을 초기화하라. 그러고 나서, 다음과 같은 선택 사항 중에서 어느 하나를 선택하여 회원 명부를 열람하는 루프를 만들어라.
// [a. 실명으로 열람			b. 직함으로 열람]
// [c. BOP 아이디로 열람		d. 회원이 지정한 것으로 열람]
// [q. 종료]
// 프로그램의 실행 예는 다음과 같이 될 것이다.
// [Benevolent Order of Programmers]
// [a. 실명으로 열람				b. 직함으로 열람]
// [c. BOP 아이디로 열람			d. 회원이 지정한 것으로 열람]
// [q. 종료]
// [원하는 것을 선택하십시오: a]
// [Wimp Macho]
// [Raki Rhodes]
// [Celia Laiter]
// [Hoppy Hipman]
// [Pat Hand]
// [원하는 것을 선택하십시오 :d]
// [Wimp Macho]
// [Junior Programmer]
// [MIPS]
// [Analyst Trainee]
// [LOOPY]
// [원하는 것을 선택하십시오: q]
// [프로그램을 종료합니다.]

#include <iostream>

const int strsize = 50;

struct bop {
	char fullname[strsize];				// 실명
	char title[strsize];				// 직함
	char bopname[strsize];				// BOP 아이디
	int preference;						// 0 = fullname, 1 = title, 2 = bopname
};

void show_menu();

int main()
{
	char ch;

	bop list[5] =
	{
		{ "Wimp Macho", "CEO", "BLUESKY", 0 },
		{ "Raki Rhodes", "Junior Programmer", "REDCLOUD", 1 },
		{ "Celia Laiter", "Technical Editor", "MIPS", 2 },
		{ "Hoppy Hipman", "Analyst Trainee", "SWEETY", 1 },
		{ "Pat Hand", "Technical Writer", "LOOPY", 2 }
	};

	std::cout << "Benevolent Order of Programmers\n";
	show_menu();
	
	std::cout << "원하는 것을 선택하십시오: ";

	while (std::cin >> ch && ch != 'q')
	{
		switch (ch)
		{
		case 'a':
			for (int i = 0; i < 5; ++i)
				std::cout << list[i].fullname << "\n";
			break;
		case 'b':
			for (int i = 0; i < 5; ++i)
				std::cout << list[i].title << "\n";
			break;
		case 'c':
			for (int i = 0; i < 5; ++i)
				std::cout << list[i].bopname << "\n";
			break;
		case 'd':
			for (int i = 0; i < 5; ++i)
			{
				if (list[i].preference == 0)
					std::cout << list[i].fullname << "\n";
				else if (list[i].preference == 1)
					std::cout << list[i].title << "\n";
				else
					std::cout << list[i].bopname << "\n";
			}
			break;
		}
		std::cout << "원하는 것을 선택하십시오: ";
	}

	std::cout << "프로그램을 종료합니다.\n";

	return 0;
}

void show_menu()
{
	std::cout << "a. 실명으로 열람		b. 직함으로 열람\n";
	std::cout << "c. BOP 아이디로 열람		d. 회원이 지정한 것으로 열람\n";
	std::cout << "q. 종료\n";
}
