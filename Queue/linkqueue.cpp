//Implement the queue using linked list
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;

    }
};
class Queue
{
    public:
    Node* front;
    Node* rear;
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    bool isEmpty()
    {
        if(front == NULL || rear == NULL)
        {
            return true;
        }
        else 
        return false;
    }
    void enqueue(int data)
    {
        Node* node = new Node(data);
        if(rear == NULL)
        {
        front = node;
        rear = node;
        return;
        }
        rear -> next = node;
        rear = node;
    }
    void getFront()
    {
        cout << "The Front Element Is: " << front -> data << endl;
    }
    void dequeue()
    {
        if(rear == NULL)
        {
            cout << "The Queue Is Empty. So Nothing To Delete " << endl;
            return;
        }
        else 
        {
            Node* temp = front;
            front = front -> next;
        }

    }
    
};
int main()
{
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.getFront();
    queue.dequeue();
    queue.getFront();
    queue.dequeue();
    queue.getFront();
    if(queue.isEmpty())
    {
        cout << "Queue Is Empty " << endl;
    }
    else
    cout << "Queue Is Not Empty " << endl;


    return 0;
}