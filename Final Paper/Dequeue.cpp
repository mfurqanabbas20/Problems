#include<iostream>
using namespace std;
class Dequeue{
    public:
    int front;
    int rear;
    int size;
    int* arr;
    Dequeue(int size){
        this -> size = size;
        this -> front = -1;
        this -> rear = -1; 
        arr = new int[size];
    }
    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else 
        return false;
    }
    bool isFull(){
        if((front == 0 && rear == size-1) || (front == rear + 1))
        {
            return true;
        }
        else 
        return false;
    }
    void enqueue_at_front(int data){
        if(isEmpty())
        {
            front = 0;
            rear = 0;
            arr[front] = data;

        }
        else if(isFull()){
            cout << "Cann't add more data elements to it. " << endl;
        }
        else if(front==0){
            front = size - 1;
            arr[front] = data;
        }
        else {
            front--;
            arr[front] = data;
        }
    }
    void enqueue_at_rear(int data){
        if(isEmpty()){
            front = 0;
            rear = 0;
            arr[rear] = data;
        }
        else if(isFull()){
            cout << "Cann't add more elements to it. " << endl;
        }
        else if(rear == size - 1){
            rear = 0;
            arr[rear] = data;
        }
        else {
            rear++;
            arr[rear] = data;
        }
    }
    void dequeue_at_front(){
        if(isEmpty()){
            cout << "Nothing to delete from the queue" << endl;
        }
        else if(front == 0 && rear == 0){
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front++;
        }
    }
    void dequeue_at_rear(){
        if(isEmpty()){
            cout << "Nothing to delete" << endl;
        }
        else if(rear == 0){
            rear = -1;
            front = -1;
        }
        else if(front == rear){
            front = rear = -1;
        }
        else {
            rear--;
        }
    }
    void getFront(){
        cout << "Front Element Is: " << endl;
        cout << arr[front] << endl;
    }
    void getRear(){
        cout << "Rear Element Is: " << endl;
        cout << arr[rear] << endl;
    }
    void display(){
        
    }





};
int main()
{
    cout << "This is Dequeue" << endl;
    Dequeue d(5);
    d.enqueue_at_front(1);
    d.enqueue_at_front(2);
    d.enqueue_at_front(3);
    d.enqueue_at_rear(4);
    d.enqueue_at_rear(5);
    d.getFront();
    d.getRear();

    return 0;
}