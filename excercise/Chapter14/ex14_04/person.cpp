#include "person.h"

#include <iostream>
#include <limits>
#include <cstdlib>

Person::Person() : firstname("none"), lastname("none")
{
}

Person::Person(const char* fn, const char* ln) : firstname(fn), lastname(ln)
{ 
}

void Person::Show() const
{
	std::cout << firstname << " " << lastname << std::endl;
}

void Person::Set()
{
	std::cout << "이름을 입력하십시오: ";
	std::getline(std::cin, firstname);
	std::cout << "성을 입력하십시오: ";
	std::getline(std::cin, lastname);
}

Gunslinger::Gunslinger() : Person("none", "none"), drawtime(0.0), notch(0)
{
}

Gunslinger::Gunslinger(const char* fn, const char* ln, double dt, int no) : Person(fn, ln), drawtime(dt), notch(no)
{
}

Gunslinger::Gunslinger(const Person& p, double dt, int no) : Person(p), drawtime(dt), notch(no)
{
}

double Gunslinger::Draw()
{
	return drawtime;
}

void Gunslinger::Show() const
{
	Person::Show();
	std::cout << "권총을 뽑는데 걸리는 시간: " << drawtime << "초\n";
	std::cout << "권총에 새겨진 금의 수: " << notch << "개\n";
}

void Gunslinger::Set()
{
	Person::Set();

	std::cout << "권총을 뽑는데 걸리는 시간을 입력해 주십시오: ";
	while (!(std::cin >> drawtime))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "권총을 뽑는데 걸리는 시간을 입력해주십시오: ";
	}
	std::cout << "권총에 새겨진 금의 수를 입력해 주십시오: ";
	while (!(std::cin >> notch))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "권총에 새겨진 금의 수를 입력해 주십시오: ";
	}
}

PokerPlayer::PokerPlayer() : Person("none", "none")
{
}

PokerPlayer::PokerPlayer(const char* fn, const char* ln) : Person(fn, ln)
{
}

PokerPlayer::PokerPlayer(const Person& p) : Person(p)
{
}

int PokerPlayer::Draw() const
{
	return std::rand() % 52 + 1;
}

BadDude::BadDude() : Person("none", "none"), Gunslinger()
{
}

BadDude::BadDude(const char* fn, const char* ln, double dt, int no) : Person(fn, ln), Gunslinger(fn, ln, dt, no)
{
}

BadDude::BadDude(const Person& p, const Gunslinger& gs) :Person(p), Gunslinger(gs)
{
}

double BadDude::gDraw()
{
	return Gunslinger::Draw();
}

int BadDude::pDraw()
{
	return PokerPlayer::Draw();
}

void BadDude::Show() const
{
	Gunslinger::Show();
	// PokerPlayer는 Show()가 없음
}

void BadDude::Set()
{
	Gunslinger::Set();
	// PokerPlayer는 Set()이 없음
}
