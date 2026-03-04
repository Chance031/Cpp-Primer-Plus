#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf& g, const char* name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf& g)
{
	std::cout << "이름을 입력해주십시오: ";
	std::cin.getline(g.fullname, Len);

	if (g.fullname[0] == '\0')
	{
		return 0;
	}

	std::cout << "핸디캡을 입력해주십시요: ";
	if (!(std::cin >> g.handicap))
	{
		std::cout << "입력에 오류가 있습니다.";
		
		return 0;
	}

	std::cin.get();
	return 1;
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	std::cout << "이  름: " << g.fullname << std::endl;
	std::cout << "핸디캡: " << g.handicap << std::endl;
}