#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person
{
private:
	std::string firstname;
	std::string lastname;

public:
	Person();
	Person(const char* fn, const char* ln);
	virtual ~Person() {}
	virtual void Show() const;
	virtual void Set();
};

class Gunslinger : virtual public Person
{
private:
	double drawtime;
	int notch;

public:
	Gunslinger();
	Gunslinger(const char* fn, const char* ln, double dt, int no);
	Gunslinger(const Person& p, double dt, int no);
	~Gunslinger() {}
	double Draw();
	void Show() const;
	void Set();
};

class PokerPlayer : virtual public Person
{
public:
	PokerPlayer();
	PokerPlayer(const char* fn, const char* ln);
	PokerPlayer(const Person& p);
	~PokerPlayer() {}
	int Draw() const;
};

class BadDude : public Gunslinger, public PokerPlayer
{
public:
	BadDude();
	BadDude(const char* fn, const char* ln, double dt, int no);
	BadDude(const Person& p, const Gunslinger& gs);
	double gDraw();
	int pDraw();
	void Show() const;
	void Set();
};

#endif