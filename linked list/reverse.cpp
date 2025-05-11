#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head = NULL;

void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" "<<endl;
        p  = p ->next;
    }
}

struct Node *reverse(struct Node *current)
{
    struct Node *next,*prev=NULL;
    while(current!=NULL)
    {
        next = current ->next;
        current ->next=prev;
        prev = current;
        current = next;
    }
    return prev;
}

int main()
{
    head  = (struct Node*)malloc(sizeof(struct Node));
    struct Node *sec = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 1;
    head -> next = sec;
    
    sec ->data = 2;
    sec ->next = NULL;
    
    display(reverse(head));
}