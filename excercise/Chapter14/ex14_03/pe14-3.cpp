// Q. QueueTp 템플릿을 정의하라. worker를 지시하는 포인터들의 큐(Listing 14.10에서 정의된)를 생성하고, Listing 14.12와 비슷한 프로그램에 그 큐를 사용하여 그 템플릿이 바르게 동작하는지 테스트하라.

#include <iostream>
#include <cstring>
#include "queuetp.h"
#include "worker.h"

const int SIZE = 5;

int main()
{
	QueueTp<Worker*> lolas(SIZE);

	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		std::cout << "직종을 입력하십시오:\n" << "w: 웨이터	s: 가수		" << "t: 가수 겸 웨이터	q: 종료\n";
		std::cin >> choice;
		while (std::strchr("wstq", choice) == nullptr)
		{
			std::cout << "w, s, t, q 중에서 하나를 선택하십시오: ";
			std::cin >> choice;
		}

		if (choice == 'q')
			break;

		Worker* pw = nullptr;

		switch (choice)
		{
		case 'w':
			pw = new Waiter;
			break;
		case 's':
			pw = new Singer;
			break;
		case 't':
			pw = new SingingWaiter;
			break;
		}
		std::cin.get();
		pw->Set();
		lolas.enqueue(pw);
	}

	std::cout << "\n사원 현황은 다음과 같습니다:\n";
	Worker* temp;
	while (!lolas.isempty())
	{
		lolas.dequeue(temp);
		std::cout << std::endl;
		temp->Show();
		delete temp;
	}

	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}