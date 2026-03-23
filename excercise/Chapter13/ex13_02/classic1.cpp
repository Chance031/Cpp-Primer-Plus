#include "classic1.h"

#include <iostream>
#include <cstring>

Cd::Cd(const char* s1, const char* s2, int n, double x)
	: selections(n), playtime(x)
{
	performers = new char[std::strlen(s1) + 1];
	std::strcpy(performers, s1);
	label = new char[std::strlen(s2) + 1];
	std::strcpy(label, s2);
}

Cd::Cd(const Cd& d)
{
	performers = new char[std::strlen(d.performers) + 1];
	std::strcpy(performers, d.performers);
	label = new char[std::strlen(d.label) + 1];
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::~Cd()
{
	delete[] performers;
	delete[] label;
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

	delete[] performers;
	delete[] label;

	performers = new char[std::strlen(d.performers) + 1];
	std::strcpy(performers, d.performers);
	label = new char[std::strlen(d.label) + 1];
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;

	return *this;
}

Classic::Classic(const char* piece, const char* s1, const  char* s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	piecename = new char[std::strlen(piece) + 1];
	std::strcpy(piecename, piece);
}

Classic::Classic(const Cd& d, const char* piece)
	: Cd(d)
{
	piecename = new char[std::strlen(piece) + 1];
	std::strcpy(piecename, piece);
}

Classic::Classic(const Classic& x)
	: Cd(x)
{
	piecename = new char[std::strlen(x.piecename) + 1];
	std::strcpy(piecename, x.piecename);
}

Classic::~Classic()
{
	delete[] piecename;
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
	delete[] piecename;

	piecename = new char[std::strlen(x.piecename) + 1];
	std::strcpy(piecename, x.piecename);

	return *this;
}