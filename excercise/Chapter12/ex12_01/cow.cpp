#include "cow.h"

#include <iostream>
#include <cstring>

Cow::Cow() : hobby(nullptr), weight(0.0)
{
	strncpy(name, "noname", 20);
	name[19] = '\0';
}

Cow::Cow(const char* nm, const char* ho, double wt) : weight(wt)
{
	std::strncpy(name, nm, 19);
	name[19] = '\0';

	if (ho != nullptr)
	{
		hobby = new char[std::strlen(ho) + 1];
		std::strncpy(hobby, ho, std::strlen(ho) + 1);
	}
	else
	{
		hobby = nullptr;
	}
}

Cow::Cow(const Cow& c) : weight(c.weight)
{
	std::strncpy(name, c.name, 19);
	name[19] = '\0';
	
	if (c.hobby != nullptr)
	{
		hobby = new char[strlen(c.hobby) + 1];
		std::strncpy(hobby, c.hobby, strlen(c.hobby) + 1);
	}
	else
		hobby = nullptr;
}

Cow::~Cow()
{
	delete[] hobby;
}

Cow& Cow::operator=(const Cow& c)
{
	if (this == &c)
		return *this;

	delete[] hobby;
	
	std::strncpy(name, c.name, 19);
	name[19] = '\0';

	if (c.hobby != nullptr)
	{
		hobby = new char[strlen(c.hobby) + 1];
		std::strncpy(hobby, c.hobby, strlen(c.hobby) + 1);
	}
	else
		hobby = nullptr;

	weight = c.weight;

	return *this;
}

void Cow::ShowCow() const
{
	if (hobby == nullptr)
	{
		std::cout << "정보가 등록되지 않았습니다.\n";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "이름: " << name << std::endl;
		std::cout << "취미: " << hobby << std::endl;
		std::cout << "무게: " << weight << std::endl;
		std::cout << std::endl;
	}
}