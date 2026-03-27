#include "worker.h"

#include <iostream>

Worker::~Worker() {}

void Worker::Data() const
{
	std::cout << "사원 이름: " << fullname << std::endl;
	std::cout << "사원 번호: " << id << std::endl;
}

void Worker::Get()
{
	std::getline(std::cin, fullname);
	std::cout << "사원 번호를 입력하십시오: ";
	std::cin >> id;
	while (std::cin.get() != '\n')
		continue;
}

void Waiter::Set()
{
	std::cout << "웨이터의 이름을 입력하십시오: ";
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	std::cout << "직종: 웨이터\n";
	Worker::Data();
	Data();
}

void Waiter::Data() const
{
	std::cout << "웨이터 등급: " << panache << std::endl;
}

void Waiter::Get()
{
	std::cout << "웨이터 등급을 입력하십시오: ";
	std::cin >> panache;
	while (std::cin.get() != '\n')
		continue;
}

char* Singer::pv[] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor" };

void Singer::Set()
{
	std::cout << "가수의 이름을 입력하십시오: ";
	Worker::Get();
	Get();
}

void Singer::Show() const
{
	std::cout << "직종: 가수\n";
	Worker::Data();
	Data();
}

void Singer::Data() const
{
	std::cout << "목소리 유형: " << pv[voice] << std::endl;
}

void Singer::Get()
{
	std::cout << "가수의 목소리 유형 번호를 입력하십시오:\n";
	int i;
	for (i = 0; i < Vtypes; i++)
	{
		std::cout << i << ": " << pv[i] << " ";
		if (i % 4 == 3)
			std::cout << std::endl;
	}
	if (i % 4 != 0)
		std::cout << std::endl;
	std::cin >> voice;
	while (std::cin.get() != '\n')
		continue;
}

void SingingWaiter::Data() const
{
	Waiter::Data();
	Singer::Data();
}

void SingingWaiter::Get()
{
	Waiter::Get();
	Singer::Get();
}

void SingingWaiter::Set()
{
	std::cout << "가수 겸 웨이터의 이름을 입력하십시오: ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show() const
{
	std::cout << "직종: 가수 겸 웨이터\n";
	Worker::Data();
	Data();
}