#ifndef LIST_H_
#define LIST_H_

typedef unsigned long Item;

class List
{
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;

public:
	List();
	bool isempty() const;
	bool isfull() const;
	bool add(const Item& item);
	void visit(void (*pf)(Item&));
	void show() const;
};

#endif