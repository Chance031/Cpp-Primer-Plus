#include "classic.h"

#include <iostream>
#include <cstring>

Cd::Cd(const char* s1, const char* s2, int n, double x)
	: selections(n), playtime(x)
{
	std::strncpy(performers, s1, 49);
	performers[49] = '\0';
	std::strncpy(label, s2, 19);
	label[19] = '\0';
}

Cd::Cd(const Cd& d)
{
	std::strncpy(performers, d.performers, 49);
	performers[49] = '\0';
	std::strncpy(label, d.label, 19);
	label[19] = '\0';
	selections = d.selections;
	playtime = d.playtime;
}

void Cd::Report() const
{
	std::cout << "    연주자: " << performers << std::endl;
	std::cout << "    음반사: " << label << std::endl;
	std::cout << "수록 곡 수: " << selections << std::endl;
	std::cout << " 연주 시간: " << playtime << std::endl;
}

Cd& Cd::operator=(const Cd& d)
{
	if (this == &d)
		return *this;

	std::strncpy(performers, d.performers, 49);
	performers[49] = '\0';
	std::strncpy(label, d.label, 19);
	label[19] = '\0';
	selections = d.selections;
	playtime = d.playtime;
	
	return *this;
}

Classic::Classic(const char* piece, const char* s1, const  char* s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	std::strncpy(piecename, piece, 49);
	piecename[49] = '\0';
}

Classic::Classic(const Cd& d, const char* piece)
	: Cd(d)
{
	std::strncpy(piecename, piece, 49);
	piecename[49] = '\0';
}

void Classic::Report() const
{
	std::cout << " 작품 이름: " << piecename << std::endl;
	Cd::Report();
}

Classic& Classic::operator=(const Classic& x)
{
	if (this == &x)
		return *this;

	Cd::operator=(x);
	strncpy(piecename, x.piecename, 49);
	piecename[49] = '\0';

	return *this;
}