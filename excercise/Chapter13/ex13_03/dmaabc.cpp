#include "dmaabc.h"

#include <cstring>

dmaABC::dmaABC(const char* l, int r)
	: rating(r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
}

dmaABC::dmaABC(const dmaABC& rs)
	: rating(rs.rating)
{
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
}

dmaABC::~dmaABC()
{
	delete[] label;
}

void dmaABC::View() const
{
	std::cout << "상표: " << label << std::endl;
	std::cout << "등급: " << rating << std::endl;
}


dmaABC& dmaABC::operator=(const dmaABC& rs)
{
	if (this == &rs)
		return *this;

	delete[] label;
	
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;

	return *this;
}

std::ostream& operator<<(std::ostream& os, const dmaABC& rs)
{
	os << "상표: " << rs.label << std::endl;
	os << "등급: " << rs.rating << std::endl;
	
	return os;
}


baseDMA::baseDMA(const char* l, int r)
	: dmaABC(l,r)
{
}

baseDMA::baseDMA(const baseDMA& rs)
	: dmaABC(rs)
{
}

baseDMA::~baseDMA()
{
}

void baseDMA::View() const
{
	dmaABC::View();
}

baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	if (this == &rs)
		return *this;

	dmaABC::operator=(rs);

	return *this;
}

std::ostream& operator<<(std::ostream& os, const baseDMA& rs)
{
	os << (const dmaABC&)rs << std::endl;

	return os;
}


lacksDMA::lacksDMA(const char* c, const char* l, int r)
	: dmaABC(l,r)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char* c, const dmaABC& rs)
	: dmaABC(rs)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const lacksDMA& rs)
	: dmaABC(rs)
{
	std::strcpy(color, rs.color);
}

lacksDMA::~lacksDMA()
{
}

void lacksDMA::View() const
{
	dmaABC::View();
	std::cout << "색상: " << color << std::endl;
}

lacksDMA& lacksDMA::operator=(const lacksDMA& rs)
{
	if (this == &rs)
		return *this;

	dmaABC::operator=(rs);

	std::strcpy(color, rs.color);

	return *this;
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& rs)
{
	os << (const dmaABC&)rs << std::endl;
	os << "색상: " << rs.color << std::endl;

	return os;
}


hasDMA::hasDMA(const char* s, const char* l, int r)
	: dmaABC(l,r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char* s, const dmaABC& rs)
	: dmaABC(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA& rs)
	: dmaABC(rs)
{
	style = new char[std::strlen(rs.style) + 1];
	std::strcpy(style, rs.style);
}

hasDMA::~hasDMA()
{
	delete[] style;
}

void hasDMA::View() const
{
	dmaABC::View();
	std::cout << "스타일: " << style << std::endl;
}

hasDMA& hasDMA::operator=(const hasDMA& rs)
{
	if (this == &rs)
		return *this;

	dmaABC::operator=(rs);

	delete[] style;
	style = new char[std::strlen(rs.style) + 1];

	std::strcpy(style, rs.style);

	return *this;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& rs)
{
	os << (const dmaABC&)rs << std::endl;
	os << "스타일: " << rs.style << std::endl;

	return os;
}