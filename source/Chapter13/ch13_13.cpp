// usebrass3.cpp -- 추상적 기초 클래스를 사용하는 다양한 단계의 사례
// acctabc.cpp와 함께 컴파일한다
#include <iostream>
#include <string>
#include "ch13_11.h"
const int GOODS = 4;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	AcctABC* p_clients[GOODS];
	std::string temp;
	long tempnum;
	double tempbal;
	char kind;

	for (int i = 0; i < GOODS; i++)
	{
		cout << "고객의 이름을 입력하십시오: ";
		getline(cin, temp);
		cout << "고객의 계좌 번호를 입력하십시오: ";
		cin >> tempnum;
		cout << "계좌 개설 잔액을 입력하십시오: $";
		cin >> tempbal;
		cout << "Brass 계좌는 1, "
			 << "BrassPlus 계좌는 2를 입력하십시오: ";

		while (cin >> kind && (kind != '1' && kind != '2'))
			cout << "1 아니면 2, 둘 중 하나를 입력하십시오: ";
		if (kind == '1')
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		else
		{
			double tmax, trate;
			cout << "당좌 대월 한도를 입력하십시오: $";
			cin >> tmax;
			cout << "당자 대월 이자율을 소수점 형식으로 "
				 << "입력하십시오: ";
			cin >> trate;
			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}
		while (cin.get() != '\n')
			continue;
	}
	cout << endl;
	for (int i = 0; i < GOODS; i++)
	{
		p_clients[i]->ViewAcct();
		cout << endl;
	}

	for (int i = 0; i < GOODS; i++)
	{
		delete p_clients[i];	// 가용 메모리
	}
	cout << "프로그램을 종료합니다.\n";

	return 0;
}