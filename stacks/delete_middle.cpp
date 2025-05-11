#include<iostream>
#include<stack>
using namespace std;

stack<int> s;

    bool isEmpty()
    {
        if(s.empty())
        return true;
        else
        {
        return false;
        }
    }
    void push(int x)
    {
        s.push(x);
    }
    int pop()
    {
        if(isEmpty()==1)
            return -1;
        else
        {
            int temp =s.top();
            s.pop();
            return temp;
        }
    }
    void delete_M(int current = 0)
    {
        if(isEmpty() || current == s.size()/2)
        {
        pop();
        return;
        }
        else
        {
        int temp = pop();
        delete_M(current+1);
        push(temp);
        }
    }

int main()
{
    int x;
    int size;
    cout<<"enter the size of the stack"<<endl;
    cin>>size;
    cout<<"enter the elements of stack "<<endl;
    //s -> size = Size;
    //s-> top = -1;
    
    for(int i =0;i<size;i++)
    {
        cin>>x;
        push(x);
    }
    //cout<<s.size()<<endl;
    delete_M();

    
    while(!s.empty())
    {
        cout<<s.top()<<"  ";
        pop();
    }
}

