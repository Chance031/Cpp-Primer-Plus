#include "port.h"

#include <cstring>

Port::Port(const char* br, const char* st, int b)
	: bottles(b)
{
	brand = new char[std::strlen(br) + 1];
	std::strcpy(brand, br);

	std::strncpy(style, st, 19);
	style[19] = '\0';
}

Port::Port(const Port& p)
	: bottles(p.bottles)
{
	brand = new char[std::strlen(p.brand) + 1];
	std::strcpy(brand, p.brand);

	std::strncpy(style, p.style, 19);
	style[19] = '\0';
}

Port& Port::operator=(const Port& p)
{
	if (this == &p)
		return *this;

	delete[] brand;
	brand = new char[std::strlen(p.brand) + 1];
	std::strcpy(brand, p.brand);

	std::strncpy(style, p.style, 19);
	style[19] = '\0';

	bottles = p.bottles;

	return *this;
}

Port& Port::operator+=(int b)
{
	bottles += b;

	return *this;
}

Port& Port::operator-=(int b)
{
	if (bottles >= b)
		bottles -= b;
	else
		std::cout << "실패했습니다.\n";

	return *this;
}

void Port::Show() const
{
	std::cout << "브랜드: " << brand << std::endl;
	std::cout << "스타일: " << style << std::endl;
	std::cout << "수량: " << bottles << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;

	return os;
}

VintagePort::VintagePort(const char* br, const char* st, int b, const char* nn, int y)
	: Port(br, st, b), year(y)
{
	nickname = new char[std::strlen(nn) + 1];
	std::strcpy(nickname, nn);
}

VintagePort::VintagePort(const VintagePort& vp)
	: Port(vp), year(vp.year)
{
	nickname = new char[std::strlen(vp.nickname) + 1];
	std::strcpy(nickname, vp.nickname);
}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if (this == &vp)
		return *this;

	Port::operator=(vp);

	delete[] nickname;
	nickname = new char[std::strlen(vp.nickname) + 1];
	std::strcpy(nickname, vp.nickname);

	year = vp.year;

	return *this;
}

void VintagePort::Show() const
{
	Port::Show();
	std::cout << "별명: " << nickname << std::endl;
	std::cout << "포도 수확 년도: " << year << std::endl;
}

std::ostream& operator<<(std::ostream& os, const VintagePort& vp)
{
	os << (const Port&)vp;
	os << ", " << vp.nickname << ", " << vp.year;

	return os;
}