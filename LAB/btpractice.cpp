#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* CreateBT(Node* root){
    int data;
    cout << "Enter the data" << endl;
    cin >> data;
    if(data == -1){
        return NULL;
    }
    root = new Node(data);
    cout << "Enter the data for inserting in left of " << data << endl;
    root -> left = CreateBT(root -> left);
    cout << "Enter the data for inserting in right of " << data << endl;
    root -> right = CreateBT(root -> right);
    return root;
}
void PreOrder(Node* root){
    if(root == NULL){
        return ;
    }
    cout << root -> data << endl;
    PreOrder(root -> left);
    PreOrder(root -> right);
}
void InOrder(Node* root){
    if(root == NULL){
        return;
    }
    InOrder(root -> left);
    cout << root -> data << endl;
    InOrder(root -> right);
}
void PostOrder(Node* root){
    if(root == NULL){
        return;
    }
    PostOrder(root -> left);
    PostOrder(root -> right);
    cout << root -> data << endl;
}
int main()
{
    Node* root = NULL;
    root = CreateBT(root);
    cout << "PreOrder-->" << endl;
    PreOrder(root);
    cout << "PostOrder--> " << endl;
    PostOrder(root);
    cout << "InOrder--> " << endl;
    InOrder(root);
    return 0;
}