#include<iostream>
#include<stack>

using namespace std;

std :: stack<int>stk;

bool isEmpty()
{
    if(stk.empty())
        return 1;
    else
        return 0;
}

void push(int x)
{
    stk.push(x);
}

int pop()
{
    int x = stk.top();
    stk.pop();
    return x; 
}

void Remove_lt(int current =  0)
{
    int temp = stk.top();
    stk.pop();
    if(isEmpty() || current == stk.size() -1)
    {
        pop();
        return;
    }
    else
    {
    Remove_lt(current++);
    push(temp);
    }
}
int main()
{
    int  size;
    cout<<"enter the size of stack"<<endl;
    cin>>size;
    cout<<"enter the elements of the stack"<<endl;
    int x;
    for(int i = 0;i<size;i++)
    {
        cin>>x;
        push(x);
    }
    Remove_lt();

    while(!isEmpty())
    {
        int x = stk.top();
        cout<<x<<" ";
        pop();
    }
    exit(0);
}