#include <iostream>
using namespace std;
class Dequeue
{
public:
    int *arr;
    int size;
    int rear;
    int front;
    Dequeue(int size)
    {
        this->size = size;
        arr = new int[size];
        rear = -1;
        front = -1;
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
            return false;
    }
    bool isFull()
    {
        if (front)
    }
    void pushatFront(int data)
    {
        if (isFull())
        {
            cout << "Dequeue Is Full" << endl;
        }
        else if (isEmpty())
        {
            front = rear = 0;
            arr[front] = data;
        }
        else if (front == 0)
        {
            front = size - 1;
            arr[front] = data;
        }
        else
        {
            front--;
            arr[front] = item;
        }
    }
} int main()
{
    return 0;
}