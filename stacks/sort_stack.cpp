#include<iostream>
#include<stack>
#include<algorithm>
#include <type_traits>

using namespace std;

class Stack
{
    //properties
    public:
        int *arr;
        int top;
        int size;

    //behaviour
    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
bool isFull()
{
    
}
int top_elem()
{
    return arr[top];
}
void push(int x)
{
    if(size-top>1)
    {
        top++;
        arr[top] = x;
        cout<<arr[top]<<" ";
    }
    else
    {
        cout<<" stack overflow"<<endl;
    }
}

int pop()
{
    //int x;
    if(top >= 0)
      
    return arr[top--];
    else
        cout<<"stack underflow"<<endl;
        return -1;
}
bool empty()
{
    if(top == -1)
        return true;
    
    return false;
}
void sorted_push(Stack st,int x)
{
    if(st.empty() || st.top_elem() < x)
    {
        st.push(x);
        return;
    }
    int temp = st.top_elem();
    st.pop();

    sorted_push(st,x);
    st.push(temp);
}
};
void sortStack(Stack st)
{
    int x = st.top_elem();
    st.pop();

    if(!st.empty())
    {
        return;
    }
    sortStack(st);
    if(st.top < x)
    {
        st.push(x);
    }
    else
    {
    st.sorted_push(st,x);
    }
}
int main()
{
    Stack st(5);
    st.push(6);
    st.push(2);
    st.push(3);
    st.push(7);
    st.push(5);

sortStack(st);

  for(int i = 0;i<5;i++)
   {
       int x = st.pop();
       cout<<x<<" ";
   };
}