// Q. 따로 떨어진 q가 입력될 때까지 한 번에 한 단어씩 입력을 읽는 프로그램을 작성하라. 프로그램은 모음으로 시작하는 단어 수, 자음으로 시작하는 단어 수, 두 범주의 어디에도 속하지 않는 것들의 수를 보고해야 한다.
// 한가지 방법은, 글자들로 시작하는 단어와 그렇지 않은 것들을 구별하기 위해 isalpha()를 사용하고나서, if 또는 switch 구문을 사용하여 isalpha() 검사에 전달된 것들 중에서 모음으로 시작하는 단어를 다시 식별하는 것이다. 프로그램의 실행 예는 다음과 같이 될 것이다.
// [단어들을 입력하시오 (끝내려면 q):]
// [The 12 awesome oxen ambled]
// [quietly across 15 meters of lawn. q]
// [모음으로 시작하는 단어 수: 5]
// [자음으로 시작하는 단어 수: 4]
// [기타: 2]

#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::string ch;
	int vowel = 0;
	int consonant = 0;
	int other = 0;

	std::cout << "단어들을 입력하시오 (끝내려면 q):\n";

	while (std::cin >> ch && ch != "q")
	{
		if (isalpha(ch[0]))
		{
			if (ch[0] == 'a' || ch[0] == 'A' || ch[0] == 'e' || ch[0] == 'E' || ch[0] == 'i' || ch[0] == 'I' || ch[0] == 'o' || ch[0] == 'O' || ch[0] == 'u' || ch[0] == 'U')
				vowel++;
			else
				consonant++;
		}
		else
			other++;
	}

	std::cout << "모음으로 시작하는 단어 수: " << vowel << "\n";
	std::cout << "자음으로 시작하는 단어 수: " << consonant << "\n";
	std::cout << "기타: " << other << "\n";

	std::cout << "프로그램을 종료합니다.\n";

	return 0;
}