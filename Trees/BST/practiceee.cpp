#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* CreateBST(Node* root, int data) {
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(data > root -> data){
        CreateBST(root -> right, data);
    }
    if(data < root -> data){
        CreateBST(root -> left, data);
    }
    return root;
}
Node* minVal(Node* root)
{
    Node* temp = root;
    while(temp -> left != NULL){
        temp = temp -> next;
    }
    return temp;
}
Node* maxVal(Node* root){
    Node* temp = root;
    while(temp -> right != NULL){
        temp = temp -> next;
    }
    return temp;
}
Node* DeleteFromBST(Node* root, int val)
{
    if(root == NULL)
    {
        return;
    }
    if(root -> data == val){
        //o child case
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return root;
        }
        //1 child case
        //left case
        if(root -> right == NULL && root -> left != NULL){
            Node* temp = root -> left;
            delete root;
            return temp;

        }
        //right case
        if(root -> right != NULL && root -> left == NULL)
        {
            Node* temp = root -> right;
            delete root;
            return temp;
        }
        //2 child case
        if(root -> left != NULL && root -> right != NULL){
            int min = minVal(root -> right) -> data;
            root -> data = min;
            root -> right = DeleteFromBST(root -> right, min);
            return root;
        }
    }

}
void takeInput(Node* root)
{
    int data;
    cout << "Enter the data " << endl;
    cin >> data;
    while(data!=-1)
    {
        root = CreateBST(root, data);

    }
}
int main()
{

    return 0;
}