#include<iostream>
#include<queue>
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
Node* CreateBST(Node* root, int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if(data > root -> data)
    {
        root -> right = CreateBST(root -> right, data);
    }
    else
    {
        root -> left = CreateBST(root -> left, data);
    }
    return root;
}
bool SearchInBST(Node* root, int x)
{
    if(root == NULL)
    {
        return false;
    }
    if(root -> data == x)
    {
        return true;
    }
    if(root -> data > x)
    {
        //left part mei seach krein gaye. 
        return SearchInBST(root->left, x);
    }
    else
    {
        return SearchInBST(root->right, x);
    }
}
Node* minVal(Node* root)
{
    Node* temp = root;
    while(temp -> left != NULL)
    {
        temp = temp -> left;
    }
    return temp;
}
Node* maxVal(Node* root)
{
    Node* temp = root;
    while(temp -> right != NULL)
    {
        temp = temp -> right;
    }
    return temp;
}
Node* DeleteFromBST(Node* root, int val)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data == val)
    {
        //0 child case
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        //1 child case
        //left child
        if(root->left != NULL && root->right == NULL)
        {
            Node* temp = root -> left;
            delete root;
            return temp;
        }

        // right child 
        if(root->left == NULL && root->right != NULL)
        {
            Node* temp = root -> right;
            delete root;
            return temp;
        }
        
        //2 child case
        if(root->left != NULL && root->right != NULL)
        {
            int mini = minVal(root->right) -> data;
            root->data = mini;
            root->right = DeleteFromBST(root->right, mini);
            return root;
        }

    }
    else if(root -> data > val)
    {
        //left part mei jao
        root->left = DeleteFromBST(root->left, val);
        return root;
    }
    else
    {
        //right part mei jao
        root->right = DeleteFromBST(root->right, val);
        return root;
    }
}
void takeInput(Node* &root)
{
    int data;
    cout << "Enter the data " << endl;
    cin >> data;
    while (data != -1)
    {
        root = CreateBST(root, data);
        cout << "Enter the data";
        cin >> data;
    }
}
int main()
{
    Node* root = NULL;
    cout << "Enter the data to create BST" << endl;
    takeInput(root);

   cout << "Printing the BST" << endl;
   DeleteFromBST(root, 10);
   return 0;
}