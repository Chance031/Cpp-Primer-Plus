// Q. 연습 6을 다시 하되, 이번에는 파일로부터 정보를 얻도록 프로그램을 수정하라. 파일에 들어있는 첫 번째 항목은 기부자 수가 되어야 한다. 파일의 나머지는 두 행씩 짝을 이루어, 첫 번째 행은 기부자의 이름, 두 번째 행은 기부액이 되어야 한다. 즉, 파일은 다음과 같이 되어야 한다.
// [4]
// [Same Stone]
// [2000]
// [Freida Flass]
// [100500]
// [Tammy Tubbs]
// [5000]
// [Rich Raptor]
// [55000]

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

struct donator
{
	std::string name;
	double donation;
};

int main()
{
	std::string filename;
	std::ifstream inFile;
	int person = 0;
	int count = 0;

	std::cout << "데이터 파일의 이름을 입력하십시오: ";
	std::getline(std::cin, filename);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		std::cout << filename << " 파일을 열 수 없습니다.\n";
		std::cout << "프로그램을 종료합니다.\n";
		exit(EXIT_FAILURE);
	}

	if (!(inFile >> person)) exit(EXIT_FAILURE);
	inFile.get();

	donator* don = new donator[person];

	for (int i = 0; i < person; ++i)
	{
		std::getline(inFile, don[i].name);
		inFile >> don[i].donation;
		inFile.get();
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

	inFile.close();
	delete[] don;
	return 0;
}