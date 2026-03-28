#include "emp.h"

#include <limits>

abstr_emp::abstr_emp() : fname(), lname(), job()
{
}

abstr_emp::abstr_emp(const std::string& fn, const std::string& ln, const std::string& j) : fname(fn), lname(ln), job(j)
{
}

void abstr_emp::ShowAll() const
{
	std::cout << "이름: " << fname << std::endl;
	std::cout << "  성: " << lname << std::endl;
	std::cout << "직업: " << job << std::endl;
}

void abstr_emp::SetAll()
{
	std::cout << "이름을 입력하십시오: ";
	std::cin >> fname;
	std::cout << "성을 입력하십시오: ";
	std::cin >> lname;
	std::cout << "직업을 입력하십시오: ";
	std::cin >> job;
}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e)
{
	os << e.fname << " " << e.lname << std::endl;

	return os;
}

abstr_emp::~abstr_emp()
{
	// 가상 소멸자 구현
}

employee::employee() : abstr_emp()
{
}

employee::employee(const std::string& fn, const std::string& ln, const std::string& j) : abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

manager::manager() : abstr_emp(), inchargeof(0)
{
}

manager::manager(const std::string& fn, const std::string& ln, const std::string& j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico)
{
}

manager::manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico)
{
}

manager::manager(const manager& m) : abstr_emp(m), inchargeof(m.inchargeof)
{
}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "관리하는 abstr_emp의 수: " << inchargeof << std::endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "관리하는 abstr_emp의 수를 입력하시오: ";
	while (!(std::cin >> inchargeof))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "관리하는 abstr_emp의 수를 입력하시오: ";
	}
}

fink::fink() : abstr_emp(), reportsto()
{
}

fink::fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) : abstr_emp(fn, ln, j), reportsto(rpo)
{
}

fink::fink(const abstr_emp& e, const std::string& rpo) : abstr_emp(e), reportsto(rpo)
{
}

fink::fink(const fink& e) : abstr_emp(e), reportsto(e.reportsto)
{
}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "fink가 보고하는 대상: " << reportsto << std::endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "fink가 보고하는 대상을 입력하시오: ";
	std::cin >> reportsto;
}

highfink::highfink() : abstr_emp(), manager(), fink()
{
}

highfink::highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
}

highfink::highfink(const abstr_emp& e, const std::string& rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo)
{
}

highfink::highfink(const fink& f, int ico) : abstr_emp(f), manager(f, ico), fink(f)
{
}

highfink::highfink(const manager& m, const std::string& rpo) : abstr_emp(m), manager(m), fink(m, rpo)
{
}

highfink::highfink(const highfink& h) : abstr_emp(h), manager(h), fink(h)
{
}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "관리하는 abstr_emp의 수: " << InChargeOf() << std::endl;
	std::cout << "fink가 보고하는 대상: " << ReportsTo() << std::endl;
}

void highfink::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "관리하는 abstr_emp의 수를 입력하시오: ";
	while (!(std::cin >> InChargeOf()))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "관리하는 abstr_emp의 수를 입력하시오: ";
	}
	std::cout << "fink가 보고하는 대상을 입력하시오: ";
	std::cin >> ReportsTo();
}
