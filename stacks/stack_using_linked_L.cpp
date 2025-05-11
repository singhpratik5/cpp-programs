#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*top = NULL;

int capacity;
int size(struct Node *p)
{
    int n = 0;
    while(p!=NULL)
    {
        n++;
        p = p -> next;
    }
    return n;
}
void push(int x)
{
    if(size(top) == capacity)
    cout<<"stack overflow"<<endl;

    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    t -> data = x;
    t -> next = NULL;
    t -> next = top;
    top = t;
    //top = head;
}
int peek(struct Node *p)
{
    return p -> data;
}

int pop()
{
    if(top == NULL)
    {
    return INT16_MIN;
    }
    else
    {
    struct Node *temp = top;
    top = top -> next;
    //top = head;
    return temp -> data;
    }
}
int main()
{
    cout<<"Enter the capacity of the stack"<<endl;
    cin>>capacity;
    cout<<"enter the elements for stack"<<endl;
    for(int i =0;i<capacity;i++)
    {
        int x;
        cin>>x;
        push(x);
    }

    for(int i=0;i<capacity/2;i++)
    {
        cout<<pop()<<"  ";
    }
    exit(0);
}