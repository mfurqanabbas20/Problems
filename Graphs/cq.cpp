#include<iostream>
using namespace std;
class Queue{
    public:
    int* arr;
    int size;
    int front; 
    int rear;
    Queue(int size){
        this -> size = size;
        arr = new int[size];
        front = rear = -1;
    }
    bool isEmpty()
    {
        if(front == -1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if((rear+1) % size == front){
            return true;
        }
        else
        return false;
    }
    void enqueue(int data)
    {
        if(isEmpty()){
            front = rear = 0;
            arr[rear] = data;
        }
        else if(isFull()){
            cout << "Queue Is Full Cann't Add More Data Elements" << endl;
        }
        else{
            rear = (rear+1) % size;
            arr[rear] = data;
        }
    }
    void dequeue(){
        if(isEmpty()){
            cout << "Queue is Empty so cann't delete anything" << endl;
        }
        else if(front == rear){
            front = rear = -1;
        }
        else{
            cout << "Deleting " << arr[front] << " " << endl;
            front = (front+1) % size;
        }
    }
    void getFront(){
        cout << arr[front] << endl;
        cout << arr[rear] << endl;
    }

};
int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.getFront();
    q.dequeue();
    q.enqueue(60);
    q.getFront();
    return 0;
}