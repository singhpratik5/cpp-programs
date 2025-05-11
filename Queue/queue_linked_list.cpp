#include<iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    struct Node *prev;
}*head = NULL;

class queue{

    public :
    void enqueue(int x)
    {
        struct Node *t = new Node;
        t -> data = x;
        t -> next = NULL;
        cout<<t->data<<" ";
        if(head == NULL)
        {
            head = t;
            head -> next = NULL;
        }
        else
        {
        head -> next = t;
        head = t;
        }
    }
    int dequeue()
    {
        if(head -> prev == head -> next)
        {
            cout<<" No elememt to dequeue"<<endl;
        }
        struct Node *t = head -> front;
        head -> front = head -> front -> next;
        return t -> data;
    }

    void display()
    {
        if(head -> front == head -> back)
        {
            cout<<" No element to display"<<endl;
            return;
        }
        struct Node *t = head -> front;
        for(t = head -> front;t!=head->back;t=t->next)
        {
            cout<<t-> data<<" -> ";
        }
    }
};

int main()
{
    int opt;
    queue q;
    head = new Node;
    head -> back = head -> front = NULL;
    
    for(int i =0;i<100;i++)
    {
    cout<<" Choose option to perform actions"<<endl;
    cout<<" 1 -> enqueue  / 2 -> dequeue  / 3 -> display"<<endl;
    cin>>opt;
    int x;
    switch(opt)
    {
    case 1 :
        cout<<" Enter the data to insert"<<endl;
        cin>>x;
        q.enqueue(x);
        break;
    case 2:
        q.dequeue();
        break;
    case 3:
        q.display();
        break;
    default:
        cout<<" Enter a valid input"<<endl;
        break;
    }
    }

}
