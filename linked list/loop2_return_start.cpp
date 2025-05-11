#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head = NULL;

struct Node* return_startNode(struct Node *p)
{
    if(p == NULL || p -> next == NULL)
    {
        return NULL;
    }
    while(p!=NULL)
    {
        struct Node *q = p -> next;
        while(q != NULL)
        {
            if(p == q)
            return p;

            q = q -> next;
        }
        p = p -> next;
    }

    return NULL;
}

int main()
{
    struct Node *sec = (struct Node*)malloc(sizeof(struct Node));
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 1;
    head -> next = sec;
    sec -> data = 2;
    sec -> next = head;

    struct Node *t = return_startNode(head);
    cout<<t-> data<<endl;
    exit(0);
}