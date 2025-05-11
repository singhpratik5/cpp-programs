#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *p)
{
    while(p!= NULL)
    {
        cout<<p-> data<<" ";
        p = p -> next;
    }
    cout<<endl;
}

void reverse_array(int arr[],int N)
{
    for(int i=0;i<N/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[N-i-1];
        arr[N-i-1] = temp;
    }
}

struct Node* reverse_alter_k(struct Node *p,int k)
{
    struct Node *q = p;
    struct Node *x = p;
    while(q!=NULL)
    {
    int arr[k];
    for(int i=0;i<k;i++)
    {
        arr[i] = q -> data;
        q=q->next;
    }
    reverse_array(arr,k);
    q = x;
    for(int i=0;i<k;i++)
    {
        q -> data = arr[i];
     //   cout<<q -> data<<" ";
        q = q -> next;
        x = x->next;
    }
    if(q == NULL)
    return p;

    for(int i=0;i<k;i++)
    {
       // q -> data = arr[i];
        q = q -> next;
        x = x->next;
    }
    //if(q == NULL || q -> next == NULL)
    //return p;
    }
    return p;
}

int main()
{
 struct Node *head = NULL;
 struct Node *newNode, *temp;


    int n,data,k;
    cout<<"Enter the number of nodes you want to create: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        newNode = new Node();
        if(head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp -> next = newNode;
            temp = newNode;
        }
        cout<<"Enter the data for node "<<i+1<<endl;
        cin>>data;
        newNode -> data = data;
        newNode -> next = NULL;
    }

    cout<<"enter the no.of nodes after which we need to alter"<<endl;
    cin>>k;

    display(head);

    struct Node *t  =   reverse_alter_k(head,k);

    display(t);
    exit(0);
}