//Implement queue using array
#include<iostream>
#include<queue>
using namespace std;
class Queue
{
    public:
    int size;
    int* arr;
    int front;
    int rear;
    Queue(int size)
    {
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;

    }
    bool isEmpty()
    {
        if(rear == -1)
        {
            return true;
        }
        else
        return false;
    }
    bool isFull()
    {
        if(rear == size - 1 )
        {
            return true;
        }
        else
        return false;

    }
    void enqueue(int item)
    {
        if(isFull())
        {
            cout << "Cannot Add More Items Into The Queue Becoz Queue is Full " << endl;
            return;
        }
        else if(isEmpty())
        {
            front = front + 1;
            rear++;
            
            arr[rear] = item;
        }
        else
        {
            rear++;
            arr[rear] = item;
        }
    }
    void getFront()
    {
        if(isEmpty())
        {
            cout << "The Queue Is Empty " << endl;
        }
     else
       cout << "The Front Item Is: " << arr[front] << endl;
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout << "The Queue Is Empty " << endl;
        }
        else if(rear == 0 || front == 0)
        {
            rear--;
            front--;
        }
        else
        {
            rear--;
        }

    }

};
int main()
{   
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.getFront();
    if (q.isEmpty())
    {
        cout << "Queue Is Empty " << endl;
    }
    else
        cout << "Queue Is Not Empty " << endl;

    return 0;
}