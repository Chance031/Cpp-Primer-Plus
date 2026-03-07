#include <iostream>
#include "list.h"

List::List()
{
	top = 0;
}

bool List::isempty() const
{
	return top == 0;
}

bool List::isfull() const
{
	return top == MAX;
}

bool List::add(const Item& item)
{
	if (top < MAX)
	{
		items[top++] = item;

		return true;
	}

	return false;
}

void List::visit(void (*pf)(Item&))
{
	for (int i = 0; i < top; ++i)
	{
		pf(items[i]);
	}
}

void List::show() const
{
	for (int i = 0; i < top; ++i)
		std::cout << "#" << i + 1 << " 번 리스트: " << items[i] << std::endl;
}
