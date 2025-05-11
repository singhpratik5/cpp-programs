/*#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head = NULL;

void display(struct Node *p)
{
    while(p != NULL)
    {
        cout<<p-> data<<" ->";
        p = p -> next;
    }
}

struct Node *reverse(struct Node *p)
{
    //struct Node *x = p;
    struct Node *q = NULL,*r = NULL;
   // int count = 0;
    while(p != NULL)
    {
        r = q;
        q = p;
        p = p -> next;
        q -> next = r;
    }
    //display(q);
    //head = q;
    return q;
}

struct Node* reverse_alterNodes(struct Node *p)
{
    
    struct Node *q = p;
    //display(q);
    int i = 0;
    while(q != NULL)
    {
        if(i%2 == 1)
        {
            //cout<<q -> data;
            struct Node *t = q;
            q  = reverse(t);
            //cout<<q -> next -> data;
        }
        i++;
        q = q -> next;
    }
   // head = p;
    return p;
}

int main()
{  
    head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* sec = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 1;
    head -> next = sec;

    sec -> data = 2;
    sec -> next = third;

    third -> data = 3;
    third -> next = NULL;

    reverse_alterNodes(head);
    //display(head);
    exit(0);
}
*/
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

struct Node *reverse(struct Node *p)
{
    struct Node *q = NULL,*r = NULL;
    while(p!= NULL)
    {
        r = q;
        q = p;
        p = p -> next;
        q -> next = r;
    }
    return q;
}

struct Node *extract(struct Node *p)
{
    struct Node *q = p -> next;
    struct Node *r = q -> next;
    while(r!= NULL && r -> next!= NULL)
    {
        if(r -> data % 2 == 0)
        {
            q -> next = r -> next;
            r -> next = p -> next;
            p -> next = r;
            p = p -> next;
            r = q -> next;
        }
        else
        {
            q = r;
            r = r -> next;
        }
    }
    return p;
}

int main()
{
    struct Node *head = NULL;
    struct Node *newNode, *temp;

    int n,data;
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

    cout<<"Original Linked List: "<<endl;
    display(head);

    head = extract(head);

    cout<<"Extracted Alternate Nodes: "<<endl;
    display(head);

    cout<<"Reversed Extracted List: "<<endl;
    head = reverse(head);

    cout<<"Reversed Linked List with Alternate Nodes Reversed: "<<endl;
    display(head);

    return 0;
}
