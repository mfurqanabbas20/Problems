#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};
void Preorder(Node* root)
{
    if(root == NULL)
    {
        return ;
    }
    cout << root -> data << endl;
    Preorder(root-> left);
    Preorder(root->right);
}
Node* CreateTree(Node* root)
{
    int data;
    cout << "Enter the data ";
    cin >> data;
    root = new Node(data);
    if(data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for inserting in left of " << data << endl;
    root->left = CreateTree(root->left);
    cout << "Enter the data for inserting in right of " << data << endl;
    root->right = CreateTree(root->right);
    return root;

}

int main()
{
    Node* root = NULL;
    root = CreateTree(root);
    Preorder(root);

    return 0;

}