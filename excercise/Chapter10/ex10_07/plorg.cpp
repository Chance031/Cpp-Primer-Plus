#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(const char* name, int CI)
{
	strncpy(plorgName, name, MAX - 1);
	plorgName[MAX - 1] = '\0';
	contentmentIndex = CI;
}

void Plorg::changeCI(int CI)
{
	contentmentIndex = CI;
}

void Plorg::showPlorg() const
{
	std::cout << "ÀÌ¸§: " << plorgName << std::endl;
	std::cout << "C  I: " << contentmentIndex << std::endl;
}
