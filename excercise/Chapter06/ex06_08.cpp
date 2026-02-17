// Q. 텍스트 파일을 열고, 파일의 끝까지 문자 단위로 읽고, 그 파일에 들어 있는 문자들의 수를 보고하는 프로그램을 작성하라.

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main()
{
	std::string filename;
	std::ifstream inFile;
	char ch;

	std::cout << "데이터 파일의 이름을 입력하십시오: ";
	std::getline(std::cin, filename);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		std::cout << filename << " 파일을 열 수 없습니다.\n";
		std::cout << "프로그램을 종료합니다.\n";
		exit(EXIT_FAILURE);
	}

	int count = 0;

	while (inFile.get(ch))
	{
		std::cout << ch;

		++count;
	}

	std::cout << "문자의 개수는 " << count << "개 입니다.";

	inFile.close();
	return 0;
}