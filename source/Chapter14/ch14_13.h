// stacktp.h -- 스택 템플릿
#ifndef STACKTP_H_
#define STACKTP_H_
template <class Type>
class Stack
{
private:
	enum { MAX = 10 };				// 클래스용 상수
	Type items[MAX];				// 스택 항목들을 저장한다
	int top;						// 스택 꼭대기 항목을 나타낸다
public:
	Stack();
	bool isempty();
	bool isfull();
	bool push(const Type& item);	// 스택에 항목을 추가한다
	bool pop(Type& item);			// 꼭대기 항목을 꺼내 item에 넣는다
};

template <class Type>
Stack<Type>::Stack()
{
	top = 0;
}

template <class Type>
bool Stack<Type>::isempty()
{
	return top == 0;
}

template<class Type>
bool Stack<Type>::isfull()
{
	return top == MAX;
}

template<class Type>
bool Stack<Type>::push(const Type& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

template<class Type>
bool Stack<Type>::pop(Type& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}

#endif