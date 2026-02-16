// Q. @ 기호가 나타날 때까지 키보드 입력을 읽어들여 대문자는 소문자로, 소문자는 대문자로 변환하여 에코하는 프로그램을 작성하라. 이때 숫자들은 에코에서 제외하라.(cctype 라이브러리를 사용하라.)

#include <iostream>
#include <cctype>

int main()
{
	char ch;

	std::cout << "문자를 입력하십시오(@ 입력시 종료):\n";
	std::cin.get(ch);
	while (ch != '@')
	{
		if (islower(ch))
			std::cout << (char)toupper(ch);
		else if (isupper(ch))
			std::cout << (char)tolower(ch);
		else if (isdigit(ch)) {}
		else
			std::cout << ch;

		std::cin.get(ch);
	}

	return 0;
}