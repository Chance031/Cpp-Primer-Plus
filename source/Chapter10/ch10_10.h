// stack.h -- 스택 ADT를 위한 클래스 정의
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 };							// 클래스용 상수
	Item items[MAX];							// 스택 항목들을 저장한다
	int top;									// 스택의 꼭대기 항목을 나타낸다
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	// push()는 스택이 가득 차 있으면 false를, 아니면 true를 리턴한다
	bool push(const Item& item);				// 스택에 항목을 추가한다
	// pop()은 스택이 비어 있으면 false를, 아니면 true를 리턴한다
	bool pop(Item& item);						// 꼭대기 항목을 꺼내 item에 넣는다
};
#endif