#include<iostream>
#include<stack>
using namespace std;

stack <int> stk;

void sorted_push(int x)
{   int temp;
     
    if(stk.empty()|| stk.top() <= x)
    {
        stk.push(x);
        return;
    }
    else
    {
        temp = stk.top();
        stk.pop();
    }
    sorted_push(x);
    stk.push(temp);
}
void sort()
{
    if(stk.empty())
        return;
    int x = stk.top();
    stk.pop();

    sort();
    if(stk.empty() || stk.top() <= x)
    stk.push(x);
    else{
        sorted_push(x);
    }
}

int main()
{
    int n;
    cout<<"Enter the no. of elements in stack "<<endl;
    cin>>n;
    cout<<"Enter the elements to be in stack "<<endl;
    int x;
    for(int i = 0;i<n;i++)
    {
        cin>>x;
        stk.push(x);
    }

    sort();

    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
}