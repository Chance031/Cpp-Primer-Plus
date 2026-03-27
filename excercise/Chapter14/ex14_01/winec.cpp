#include "winec.h"

#include <iostream>
#include <limits>

Wine::Wine() 
	: label("none"), years(0), data(ArrayInt(), ArrayInt())
{
}

Wine::Wine(const char* l, int y) 
	: label(l), years(y), data(ArrayInt(0, y), ArrayInt(0, y))
{
}

Wine::Wine(const char* l, int y, const int yr[], const int bot[])
	: label(l), years(y), data(ArrayInt(yr, y), ArrayInt(bot, y))
{
}

void Wine::GetBottles()
{
	if (years < 1)
	{
		std::cout << "오류가 발생했습니다!\n";
		return;
	}

	std::cout << years << "년 간의 " << label << " 데이터를 입력하시오:\n";

	for (int i = 0; i < years; ++i)
	{
		std::cout << "년도를 입력하시오: ";
		while (!(std::cin >> data.first()[i]))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		
			std::cout << "년도를 입력하시오: ";
		}

		std::cout << "수량을 입력하시오: ";
		while (!(std::cin >> data.second()[i]))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "수량을 입력하시오: ";
		}
	}
}

void Wine::Show() const
{
	std::cout << "와인: " << label << std::endl;
	std::cout << "	년도	수량" << std::endl;
	for (int i = 0; i < years; ++i)
	{
		std::cout << "	" << data.first()[i] << "	" << data.second()[i] << std::endl;
	}
}

const std::string& Wine::Label() const
{
	return label;
}

int Wine::sum()
{
	return data.second().sum();
}
