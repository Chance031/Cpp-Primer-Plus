// Q. Listing 10.10에 정의된 Stack 클래스의 다음과 같은 변형을 생각해 보자.
//
// [stack1.h -- 스택 ADT를 위한 클래스 선언]
// [typedef unsigned long Item;]
// []
// [class Stack]
// [{]
// [private:]
// [	enum { MAX = 10 };				// 클래스용 상수]
// [	Item* pitems;					// 스택 항목들을 저장한다]
// [	int size;						// 스택에 들어 있는 원소의 수]
// [	int top;						// 스택의 꼭대기 항목을 나타낸다]
// [public:]
// [	Stack(int n = MAX);				// n개의 원소를 가진 스택을 생성한다]
// [	Stack(const Stack& st);]
// [	~Stack();]
// [	bool isempty() const;]
// [	bool isfull() const;]
// [	// push()는 스택이 가득 차 있으면 false를, 아니면 true를 리턴한다]
// [	bool push(const Item& item);	// 스택에 항목을 추가한다]
// [	// pop()은 스택이 비어 있으면 false를, 아니면 true를 리턴합니다]
// [	bool pop(Item& item);			// 꼭대기 항목을 꺼내 item에 넣는다]
// [	Stack& operator=(const Stack& st);]
// [};]
// [#endif]
//
// private 멤버들이 보여 주는 것처럼, 이 클래스는 동적으로 대입된 배열에 스택 항목들을 저장한다. 개선된 클래스 선언에 맞게 메서드들을 다시 작성하라. 복사 생성자와 대입 연산자를 포함하여, 모든 메서드들이 바르게 동작하는지 테스트하는 프로그램을 작성하라. (stack1.h, stack1.cpp, usestak1.cpp)

#include <iostream>
#include <cctype>
#include "stack1.h"

void pop(Stack& st);

int main()
{
	char command;
	int size;
	Item item;

	std::cout << "최대 스택의 수를 입력하십시오: ";
	while (!(std::cin >> size))
	{
		std::cin.clear();
		std::cin.ignore();

		std::cout << "다시 입력하십시오: ";
	}

	Stack stack_1(size);

	std::cout << "A) PUSH		B) POP		C) COPY		Q) QUIT\n";

	while (std::cin >> command && toupper(command) != 'Q')
	{
		switch (command)
		{
		case 'a':
		case 'A':
			if (stack_1.isfull())
			{
				std::cout << "스택이 가득 찼습니다.\n";
				break;
			}

			std::cout << "추가할 값을 입력하십시오: ";
			while (!(std::cin >> item))
			{
				std::cin.clear();
				std::cin.ignore();

				std::cout << "다시 입력하십시오: ";
			}
			stack_1.push(item);
			break;
		case 'b':
		case 'B':
			pop(stack_1);
			break;
		case 'c':
		case 'C':
		{
			Stack stack_2;
			stack_2 = stack_1;
			Stack stack_3(stack_1);
			std::cout << "stack_2: ";
			pop(stack_2);
			std::cout << "stack_3: ";
			pop(stack_3);
			break;
		}
		default:
			std::cout << "잘못된 명령입니다.\n";
			break;
		}

		std::cout << "A) PUSH		B) POP		C) COPY		Q) QUIT\n";
	}

	std::cout << "프로그램 종료\n";
	return 0;
}

void pop(Stack& st)
{
	Item item;

	if (st.isempty())
	{
		std::cout << "스택이 비어있습니다.\n";
	}
	else
	{
		while (st.pop(item))
		{
			std::cout << item << "\t";
		}

		std::cout << "\n";
	}
}