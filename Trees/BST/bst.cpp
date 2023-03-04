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

void LevelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            cout << endl;
            if(!q.empty())
            {
                //queue still have some child nodes. 
                q.push(NULL);
            }
        }
        else 
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        } 
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
    takeInput(root);
    cout << "Printing the Level Order Traversal " << endl;
    //level order traversal
    LevelOrderTraversal(root);



    return 0;
}