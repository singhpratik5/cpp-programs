#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head = NULL;

class queue
{
    struct Node *front = NULL;
    struct Node *rear = NULL;

    public :
        void enqueue(int x)
        {
            struct Node *last = head;
            if(head == NULL)
            {
                struct Node *t = new Node;
                t -> data = x;
                t -> next = NULL;
                head = front = t;
            }
            else
            {
                struct Node *t = new Node;
                t -> data = x;
                t -> next = NULL;
                last -> next = t;
                last = t = t;
            }
        }
        
        int dequeue()
        {
            struct Node *t = front;
            front = front ->next;
            return t->data;
        }
};
int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
}