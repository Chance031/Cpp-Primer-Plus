#include <iostream>
#include "account.h"

BankAccount::BankAccount(const std::string& client, const std::string& num, double bal)
{
	name = client;
	acctnum = num;
	balance = bal;
}

void BankAccount::show() const
{
	std::cout << "예  금  주: " << name << std::endl;
	std::cout << "계좌  번호: " << acctnum << std::endl;
	std::cout << "잔      액: " << balance << std::endl;
}

void BankAccount::deposit(double cash)
{
	if (cash > 0)
	{
		balance += cash;
		std::cout << cash << "원 입금되었습니다.\n";
	}
	else
		std::cout << "0원 이하는 입금할 수 없습니다.\n";
}

void BankAccount::withdraw(double cash)
{
	if (cash <= 0)
		std::cout << "0원 이하는 출금할 수 없습니다.\n";
	else if (balance < cash)
		std::cout << "잔액이 부족합니다. (현재 잔액: " << balance << "원)\n";
	else
	{
		balance -= cash;
		std::cout << cash << "원 출금되었습니다.\n";
	}
}
