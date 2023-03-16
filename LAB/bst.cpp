#include<iostream>
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
Node* CreateBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    else if(data > root -> data){
        root -> right = CreateBST(root -> right, data);
    }
    else{
        root -> left = CreateBST(root -> left, data);
    }
}
void takeInput(Node* root){
    int data;
    cout << "Enter the data" << endl;
    cin >> data;
    while(data != -1){
        root = CreateBST(root, data);
        cout << "Enter the data" << endl;
        cin >> data;
    }
}
Node* MaxVal(Node* root){
    Node* temp = root;
    while(temp != NULL){
        temp = temp -> right;
    }
    return temp;
}
Node* MinVal(Node* root)
{
    Node *temp = root;
    while (temp != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node* DeleteFromBST(Node* root, int val){
    if(root == NULL){
        return NULL;
    }
     if(root -> data == val){
        //0 child case
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        //1 child case
        //left child
        if(root -> left != NULL && root -> right == NULL){
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        //right child case.
        if(root -> left == NULL && root -> right != NULL){
            Node* temp = root -> right;
            delete root;
            return temp;
        }
        // 2 child case
        if(root -> left != NULL && root -> right != NULL){
            int min = MinVal(root -> right) -> data;
            root -> data = min;
            root -> right = DeleteFromBST(root, min);
            return root;
        }
    }
    else if(root -> data > val){
        root -> left = DeleteFromBST(root -> left, val);
        return root;
    }
    else {
        root -> right = DeleteFromBST(root -> right, val);
        return root;
    }
}
int main()
{
    Node* root = NULL;
    takeInput(root);
    return 0;
}