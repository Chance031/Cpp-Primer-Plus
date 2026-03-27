#ifndef QUEUETP_H_
#define QUEUETP_H_

template <class Type>
class QueueTp
{
private:
	struct Node { Type item; struct Node* next; };
	enum { Q_SIZE = 10 };
	Node* front;
	Node* rear;
	int items;
	const int qsize;
	QueueTp(const QueueTp& q) : qsize(0) {}
	QueueTp& operator=(const QueueTp& q) { return *this; }
public:
	QueueTp(int qs = Q_SIZE) : qsize(qs), front(nullptr), rear(nullptr), items(0) {}
	~QueueTp()
	{
		Node* temp;

		while (front != nullptr)
		{
			temp = front;
			front = front->next;
			delete temp;
		}
	}
	bool isempty() const { return items == 0; }
	bool isfull() const { return items == qsize; }
	int queuecount() const { return items; }
	bool enqueue(const Type& item)
	{
		if (isfull())
			return false;

		Node* add = new Node;
		
		add->item = item;
		add->next = nullptr;
		items++;

		if (front == nullptr)
			front = add;
		else
			rear->next = add;

		rear = add;

		return true;
	}
	bool dequeue(Type& item)
	{
		if (front == nullptr)
			return false;

		item = front->item;
		items--;
		Node* temp = front;
		front = front->next;
		delete temp;

		if (items == 0)
			rear = nullptr;

		return true;
	}
};

#endif