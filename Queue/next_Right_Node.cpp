#include<iostream>
using namespace std;

class queue
{
    int front,rear;
    int *arr;
    public:
        void enqueue()
        {

        }
        int dequeue()
        {

        }
};

struct Node
{
    int data;
    struct Node *left,*right;
}*root=NULL;

void next_R_Node(struct Node *p,int key)
{
    struct Node *q;
    if(p -> data == key)
    {
        if(q -> left)
        {
            cout<<q -> left -> data<<endl;
        }
        else
        {
            cout<<p -> left<<endl;
        }
    }
    q = p;
    enqueue(p -> left -> data);
    enqueue(p);
    enqueue(p -> right);
}

int main()
{
    queue q;
    
}