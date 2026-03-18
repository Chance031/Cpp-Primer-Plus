// usett0.cpp -- 기초 클래스를 사용한다
#include <iostream>
#include "ch13_01.h"

int main()
{
	using std::cout;
	TableTennisPlayer player1("Chunk", "Blizzard", true);
	TableTennisPlayer player2("Tara", "Boomdea", false);
	player1.Name();
	if (player1.HasTable())
		cout << ": 탁구대가 있다.\n";
	else
		cout << ": 탁구대가 없다.\n";
	player2.Name();
	if (player2.HasTable())
		cout << ": 탁구대가 있다.\n";
	else
		cout << ": 탁구대가 없다.\n";

	return 0;
}