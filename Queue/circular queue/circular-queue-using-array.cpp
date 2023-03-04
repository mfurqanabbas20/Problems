#include <iostream>
using namespace std;

class queue
{

	int rear;
	int size;
	int front;
	int array[3];

public:
	queue()
	{

		front = -1;
		rear = -1;
	}

public:
	int isempty()
	{

		if (front == -1 && rear == -1)
		{
			return 1;
		}

		else
		{

			return 0;
		}
	}

public:
	int isfull()
	{

		if ((rear + 1) % 3 == front)
		{
			return 1;
		}

		else
		{

			return 0;
		}
	}

public:
	void enqueue(int item)
	{

		if (isfull())
		{

			cout << "queue is full";
		}

		else if (front == -1 && rear == -1)
		{

			front = 0;
			rear = 0;
			array[rear] = item;
			cout << "you have inserted" << item << "into queue";
		}
		else
		{

			rear = (rear + 1) % 3;
			array[rear] = item;
			cout << "you have inserted" << item << "into queue";
		}
	}

public:
	void dequeue()
	{

		if (isempty())
		{

			cout << "queue is empty";
		}

		else if (front == rear)
		{

			front = rear = -1;
			cout << "you deleted item from queue";
		}
		else
		{

			front = (front + 1) % 3;
			cout << "you deleted item from queue";
		}
	}

public:
	void display()
	{

		int i = front;
		if (isempty())
		{
			cout << "queue is empty";
		}

		else
		{

			int count = ((rear + 3 - front) % 3) + 1;

			for (int i = 0; i < count; i++)
			{

				cout << array[(front + i) % 3];
			}
		}
	}

public:
	void frontreturn()
	{

		if (isempty())
		{
			cout << "queue is empty";
		}

		else
		{

			cout << array[front];
		}
	}
};

int main()
{

	queue s;

	int n, item, temp;

	do
	{

		cout << "choose option" << endl;
		cout << "0->exit" << endl;
		cout << "1->enqueue" << endl;
		cout << "2->dequeue" << endl;
		cout << "3->getfront" << endl;
		cout << "4->display" << endl;

		cin >> n;

		switch (n)
		{

		case 0:
			break;
		case 1:
			cout << "enter data";
			cin >> item;
			s.enqueue(item);
			break;
		case 2:

			s.dequeue();
			break;

		case 3:
			s.frontreturn();
			break;

		case 4:

			s.display();
			break;
		default:

			cout << "enter correct choice";
		}

	} while (n != 0);

	return 0;
}
