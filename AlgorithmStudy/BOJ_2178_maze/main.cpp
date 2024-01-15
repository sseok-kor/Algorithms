#include <iostream>

template <typename T>



class Queue  
{
public:
	struct Node
	{
		T data;
		Node* next;
		Node* prev;
	};

	Queue();
	~Queue();
	


	bool push(T data)
	{
		if (full())
		{
			retrun false;
		}

		else if (!full())
		{
			Node* newNode = new Node();

		}
	}

	bool pop(T data)
	{

	}

	T front()
	{
		return _front.next->data;
	}

	T back()
	{
		return _rear.data;
	}

	int size()
	{
		return _size;
	}

	bool empty()
	{
		return &_front == &_rear;
	}

	bool full()
	{
		return _rear.next == &front;
	}

private:
	int _size;
	Node _front;
	Node _rear;
};

int main()
{
	return 0;
}