// Q. 문자 배열을 string 객체로 대체하여 Listing 9.9를 다시 작성하라. 프로그램은 입력 문자열이 적당한 크기인지 더 이상 체크하면 안 된다. 프로그램은 빈 문자열인지 체크하기 위해 입력 문자열을 ""와 비교할 수 있다.

#include <iostream>
#include <string>

void strcount(const std::string str);

int main()
{
	std::string input;

	std::cout << "영문으로 한 행을 입력하십시오:\n";
	while (std::getline(std::cin, input) && input != "")
	{
		strcount(input);
		std::cout << "다음 행을 입력하십시오(끝내려면 빈 행을 입력):\n";
	}
	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}

void strcount(const std::string str)
{
	static int total = 0;
	int count = 0;

	for (char ch : str)
	{
		if (ch != ' ')
			count++;
	}

	total += count;
	std::cout << "\"" << str << "\"에는 " << count << "개의 문자가 있습니다.\n";
	std::cout << "지금까지 총 " << total << "개의 문자를 입력하셨습니다.\n";
}