// Q. 연습 문제 5에서 서술한 클래스를 위한 메서드 정의들을 제공하라. 모든 메서드들이 바르게 동작하는지 보여 주는 짧은 프로그램을 하나 작성하라.(account.h, account.cpp, useaccnt.cpp)

#include <iostream>
#include "account.h"

int main()
{
	BankAccount myAccount("Jang", "0001", 0.0);

	myAccount.show();
	myAccount.deposit(5000.0);
	myAccount.show();
	myAccount.withdraw(3000.0);
	myAccount.show();
	myAccount.withdraw(2500.0);
	myAccount.show();

	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}