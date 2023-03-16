#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};
void insertAtHead(Node* &head,Node* &tail, int data)
{
    if(head == NULL){
        Node* temp = new Node(data);
        temp -> next = NULL;
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}
void insertAtSpecific(Node* &head,Node* &tail, int data, int position)
{
    cout << "Hi";
    if(head == NULL)
    {
        Node *temp = new Node(data);
        temp->next = NULL;
        head = temp;
        tail = temp;
        return;
    }
    else if(position == 1)
    {
        cout << "Hi1";
        insertAtHead(head,tail, data);
    }
    else{
        Node* newNode = new Node(data);
        Node* temp = head;
        int cnt = 1;
        while(cnt < position - 1){
            temp = temp -> next;
        }
        cout << "Hello";
        newNode->next = temp->next;
        temp -> next = newNode;
        
    }
}
void traverse(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail, 10);
    insertAtHead(head,tail, 20);
    insertAtSpecific(head,tail, 30, 3);
    traverse(head);

    return 0;
}