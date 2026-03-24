// stcktp1.h -- 수정된 Stack 템플릿
#ifndef STCKTP1_H_
#define STCKTP1_H_

template <class Type>
class Stack
{
private:
	enum { SIZE = 10 };				// 디폴트 크기
	int stacksize;
	Type* items;					// 스택 항목들을 저장한다
	int top;						// 스택의 꼭대기 항목을 나타낸다
public:
	explicit Stack(int ss = SIZE);
	Stack(const Stack& st);
	~Stack() { delete[] items; }
	bool isempty() { return top == 0; }
	bool isfull() { return top == stacksize; }
	bool push(const Type& item);	// 스택에 항목을 추가한다
	bool pop(Type& item);			// 꼭대기 항목을 꺼내 item에 넣는다
	Stack& operator=(const Stack& st);
};

template <class Type>
Stack<Type>::Stack(int ss) : stacksize(ss), top(0)
{
	items = new Type[stacksize];
}

template <class Type>
Stack<Type>::Stack(const Stack& st)
{
	stacksize::st.stacksize;
	top = st.top;
	items = new Type[stacksize];
	for (int i = 0; i < top; i++)
		items[i] = st.items[i];
}

template <class Type>
bool Stack<Type>::push(const Type& item)
{
	if (top < stacksize)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

template <class Type>
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

template <class Type>
Stack<Type>& Stack<Type>::operator=(const Stack<Type>& st)
{
	if (this == &st)
		return *this;
	delete[] items;
	stacksize = st.stacksize;
	top = st.top;
	items = new Type[stacksize];
	for (int i = 0; i < top; i++)
		items[i] = st.items[i];
	return *this;
}

#endif