#include<iostream>
using namespace std;

//struct stack{
  //  int top;
  //  int capacity;
  //  int *arr;
//}//;
int capacity;
int top = -1;
int stack[100];


int isFull()
{
    if(top == capacity - 1)
    return 1;
    else
    return 0;
}
int isEmpty(int top)
{
    if(top == -1)
    return 1;
    else
    return 0;
}
void push(int data)
{
    if(isFull()==1)
    cout<<"stack overflow"<<endl;
    else
    top = top + 1;
    stack[top] = data;
}
int pop()
{
    if(isEmpty(top)==1)
    return -1;

    int x = stack[top];
    top = top - 1;
    return x;
}
int peek()
{
    return stack[top];
}
void immediate_small(int arr[],int N)
{
    for(int i = 0;i<N-1;i++)
    {
        int x = pop();
        if(x > peek())
        cout<<x<<" ";
        else
        cout<<"-1 ";
    }
    cout<<"-1";//for last element.
}
int main()
{
    int N;
    cout<<"enter the size"<<endl;
    cin>>N;
    capacity = N;
    int arr[N];
    cout<<"enter the elements "<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++)
    {
        push(arr[N-i-1]);
    }
    immediate_small(arr,N);
    exit(0);
}

