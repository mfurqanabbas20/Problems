#include<iostream>
#include<stack>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

stack<string> s;
void PostToPre()
{
    string post;
    cout << "Enter the postfix expression";
    cin >> post;
    string expression;
    int i = 0;
    while(i < post.size())
    {
        if(post[i] >= 65 && post[i] <= 122)
        {
            s.push(string(1, post[i]));
        }
        else
        {
            string A = s.top();
            s.pop();
            string B = s.top();
            s.pop();
            expression = post[i] + B + A;
            s.push(expression);
        }
        i++;
    }
    string ans;
    while(!s.empty())
    {
        ans = ans + s.top();
        s.pop();
    }
    cout << "Expression Is: " << expression << endl;
}
void PreToPost()
{
    string ans;
    string prefix;
    cout << "Enter the prefix expression";
    cin >> prefix;
    string postfix;
    reverse(prefix.begin(), prefix.end());
    int i = 0;
    while(i < prefix.length())
    {
        if (prefix[i] >= 65 && prefix[i] <= 122)
        {
            s.push(string(1, prefix[i]));
        }
        else 
        {
            string A = s.top();
            s.pop();
            string B = s.top();
            s.pop();
            postfix = A + B + prefix[i];
            s.push(postfix);
        }
        i++;
    }
    while(!s.empty())
    {
        ans = ans + s.top();
        s.pop();
    }
    cout << "Expression Is: " << ans << endl;
}
void  PostToInfix()
{
    string postfix;
    cout << "Enter the postfix expression ";
    cin >> postfix;
    string infix;
    int i = 0;
    while(i < postfix.length())
    {
        if (postfix[i] >= 65 && postfix[i] <= 122)
        {
            s.push(string(1, postfix[i]));
        }
        else 
        {
            string A = s.top();
            s.pop();
            string B = s.top();
            s.pop();
            infix = '(' + B + postfix[i] + A + ')';
            s.push(infix);
        }
            i++;
    }
    string ans;
    while(!s.empty())
    {
        ans = ans + s.top();
        s.pop();
    }
    cout << "Expression Is: " << ans << endl;
}
void PreToInfix()
{
    string prefix;
    cout << "Enter the prefix expression ";
    cin >> prefix;
    reverse(prefix.begin(), prefix.end());
    string infix = "";
    int i = 0;
    while (i < prefix.length())
    {
        if (prefix[i] >= 65 && prefix[i] <= 122)
        {
            s.push(string(1, prefix[i]));
        }
        else
        {
            string A = s.top();
            s.pop();
            string B = s.top();
            s.pop();
            infix = '(' + A + prefix[i] + B + ')';
            s.push(infix);
        }
        i++;
    }
    string ans = "";
    while (!s.empty())
    {
        ans = ans + s.top();
        s.pop();
    }
    cout << "Expression Is: " << ans << endl;
}
int main()
{
    cout << "Enter 1 For Postfix to Prefix " << endl;
    cout << "Enter 2 For Prefix to Postfix " << endl;
    cout << "Enter 3 For Postfix to Infix " << endl;
    cout << "Enter 4 For Prefix to Infix" << endl;
    int choice;
    cin >> choice;
    switch(choice)
    {
        case 1:
        PostToPre();
        break;
        case 2: 
        PreToPost();
        break;
        case 3:
        PostToInfix();
        break;
        case 4: 
        PreToInfix();
        break;
        default: 
        cout << "Incorrect Input.. . Try Again! " << endl;
    }
    return 0;
}