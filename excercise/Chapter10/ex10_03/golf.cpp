#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf()
{
	strncpy(fullname, "no name", Len - 1);
	fullname[Len - 1] = '\0';
	handicap = 0;
}

Golf::Golf(const char* name, int hc)
{
	strncpy(fullname, name, Len - 1);
	fullname[Len - 1] = '\0';
	handicap = hc;
}

int Golf::setgolf()
{
	char temp_name[Len];
	int temp_hc;

	std::cout << "이름을 입력해주십시오: ";
	std::cin.getline(temp_name, Len);

	if (temp_name[0] == '\0')
		return 0;

	std::cout << "핸디캡을 입력해주십시요: ";
	if (!(std::cin >> temp_hc))
	{
		std::cin.clear();

		while (std::cin.get() != '\n')
			continue;

		return 0;
	}

	std::cin.get();

	*this = Golf(temp_name, temp_hc);

	return 1;
}

void Golf::showgolf() const
{
	std::cout << "이  름: " << this->fullname << std::endl;
	std::cout << "핸디캡: " << this->handicap << std::endl;
}