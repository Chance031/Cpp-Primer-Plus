// Q. 연습 5를 수정하여 3년 동안에 걸친 월간 판매량을 입력받아 2차원 배열에 저장하는 프로그램을 작성하라. 각 해당 연도의 연간 판매량을 출력하고, 2년째와 3년째까지의 누적 판매량을 출력한다.

#include <iostream>

const int MONTH = 12;
const int YEAR = 3;

int main()
{
	char* month[YEAR][MONTH] = { {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"},
								 {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"},
								 {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"} };
	int sales[YEAR][MONTH] = { 0 };
	int total = 0;

	std::cout << "3년간 월간 판매량을 입력하십시오:" << std::endl;

	for (int i = 0; i < YEAR; ++i)
	{
		std::cout << i + 1 << "년차:" << std::endl;
		
		for (int j = 0; j < MONTH; ++j)
		{
			std::cout << month[i][j] << ":	";
			if (!(std::cin >> sales[i][j]))
			{
				std::cout << "숫자를 입력하십시오." << std::endl;

				return 1;
			}
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < YEAR; ++i)
	{
		int temp = 0;
		std::cout << "3년간 월간 판매량:" << std::endl << i + 1 << "년차" << std::endl;

		for (int j = 0; j < MONTH; ++j)
		{
			std::cout << month[i][j] << ":	" << sales[i][j] << std::endl;

			temp += sales[i][j];
			total += sales[i][j];
		}

		std::cout << i + 1 << "년 연간 총 판매량은 " << temp << "입니다." << std::endl;
	}

	std::cout << "3년간 총 판매량은 " << total << "입니다." << std::endl;

	return 0;
}