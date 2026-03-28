// queuetp.h -- 내포 클래스를 사용하는 큐 템플릿
#ifnder QUEUETP_H_
#define QUEUETP_H_

template <class Item>
class QueueTP
{
private:
	enum { Q_SIZE = 10 };
	// Node는 내포 클래스 정의이다
	class Node
	{
	public:
		Item item;
		Node* next;
		Node(const Item& i) : item(i), next(0) {}
	};
	Node* front;						// Queue의 머리를 지시하는 포인터
	Node* rear;							// Queue의 꼬리를 지시하는 포인터
	int items;							// Queue에 있는 현재 항목 수
	const int qsize;					// Queue에 넣을 수 있는 최대 항목 수
	QueueTP(const QueueTP& q) : qsize(0) {}
	QueueTP& operator=(const QueueTP& q) { return *this; }
public:
	QueueTP(int qs = Q_SIZE);
	~QueueTP();
	bool isempty() const
	{
		return items == 0;
	}
	bool isfull() const
	{
		return items == qsize;
	}
	int queuecount() const
	{
		return items;
	}
	bool enqueue(const Item& item);		// 항목을 꼬리에 추가한다
	bool dequeue(Item& item);			// 머리에서 항목을 삭제한다
};

// QueueTP 메서드들
template <class Item>
QueueTP<Item>::QueueTP(int qs) : qsize(qs)
{
	front = rear = 0;
	items = 0;
}

template <class Item>
QueueTP<Item>::~QueueTP()
{
	Node* temp;
	while (front != 0)					// 큐가 아직 비어 있지 않으면
	{
		temp = front;					// 머리 항목의 주소를 임시로 저장한다
		front = front->next;			// front를 그 다음 항목으로 다시 설정한다
		delete temp;					// 이전의 머리 노드를 삭제한다
	}
}

// 큐에 항목을 추가한다
template <class Item>
bool QueueTP<Item>::enqueue(const Item& item)
{
	if (isfull())
		return false;
	Node* add = new Node(item);			// 노드를 생성한다
	// 실패하면, new 연산자는 std::bad_alloc 예외를 발생시킨다
	items++;
	if (front == 0)						// 큐가 비어 있으면
		front = add;					// 항목을 머리에 넣는다
	else
		rear->next = add;				// 그렇지 않으면 꼬리에 넣는다
	rear = add;							// rear가 새 노드를 지시하게 만든다
	return true;
}

// 머리 항목을 item 변수에 넣고 큐에서 삭제한다
template <class Item>
bool QueueTP<Item>::dequeue(Item& item)
{
	if (front == 0)
		return false;
	item = front->item;					// 큐의 머리 항목을 item에 복사한다
	items--;
	Node* temp = front;					// 머리 항목의 위치를 임시로 저장한다
	front = front->next;				// front를 그 다음 항목으로 다시 설정한다
	delete temp;						// 이전의 머리 항목을 삭제한다
	if (items == 0)
		rear = 0;
	return true;
}

#endif