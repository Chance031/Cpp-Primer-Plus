#include "string2.h"
#include <cstring>
#include <cctype>

int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}

String::String() : len(0)
{
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String(const String& st) : len(st.len)
{
	num_strings++;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete[] str;
}

void String::stringlow()
{
	for (int i = 0; i < length(); ++i)
	{
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}

}

void String::stringup()
{
	for (int i = 0; i < length(); ++i)
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
	}
}

int String::has(char ch) const
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if(str[i] == ch)
			count++;
		i++;
	}

	return count;
}

String& String::operator=(const String& st)
{
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}

String& String::operator=(const char* s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

char& String::operator[](int i)
{
	return str[i];
}

const char& String::operator[](int i) const
{
	return str[i];
}

bool operator<(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
	return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

std::ostream& operator<<(std::ostream& os, const String& st)
{
	os << st.str;
	return os;
}

std::istream& operator>>(std::istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}

String operator+(const String& st1, const String& st2)
{
	char* temp = new char[st1.len + st2.len + 1];

	std::strcpy(temp, st1.str);
	std::strcat(temp, st2.str);
	String result(temp);
	delete[] temp;

	return result;
}