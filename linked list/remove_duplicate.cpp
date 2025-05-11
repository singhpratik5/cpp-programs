#include<iostream>
#include<cctype>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head = NULL;

void create(int N,int A[])
{
    int i;
    struct Node *t,*last;
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> data = A[0];
    head -> next = NULL;
    last = head;
    for(i=1;i<N;i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t -> data = A[i];
        t -> next = NULL;
        last -> next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while(p  != NULL)
    {
        cout<< p-> data<<"->";
        p = p -> next;
    }
    cout<<"NULL";
}
void sort_array(int A[],int N)
{
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(A[i]>A[j])
            {
                int temp = A[i];
                A[i] =  A[j];
                A[j] =  temp;
            }
        }
    }
}

struct Node* sort(struct Node *p)
{   
    struct Node *q = p;
    int A[100];
    int i = 0;
    while(q!=NULL)
    {
        A[i] = q -> data;
        q = q -> next;
        i++;
    }
    sort_array(A,i);
    //for(int j=0;j<i;j++)
    //{
    //    cout<< A[j] <<endl;
    //}
    create(i,A);
    //display(head);
    return head;
}

void rm_duplicate(struct Node *p)
{
   // sort(p);
    struct Node *x = p;
    struct Node *q;
   // while(p != NULL)
   // {  // struct Node *r = x;
        q = p -> next;
        while(q!= NULL)
        {
            if(q -> data == p -> data)
            {
              // r -> next = q -> next;
              p -> next = q -> next;
               free(q);
               q = p -> next;
            }
            else 
            p = q;
            q = p -> next;
        }
       // x = x -> next;
      // return x;
    }
//}

int main()
{
 int A[10] ={1,2,2,3,3,4,3,4,6,7};
 struct Node *sec = (struct Node*)malloc(sizeof(struct Node));
 struct Node *thi = (struct Node*)malloc(sizeof(struct Node));
 struct Node *fort = (struct Node*)malloc(sizeof(struct Node));
 struct Node *fift = (struct Node*)malloc(sizeof(struct Node));
 struct Node *six = (struct Node*)malloc(sizeof(struct Node));

 struct Node* first = (struct Node*)malloc(sizeof(struct Node));
 first -> data = 1;
 first -> next = sec;
 sec -> data = 2;
 sec -> next = thi;

 thi -> data = 2;
 thi -> next = fort;

 fort -> data = 3;
 fort -> next = fift;

 fift -> data = 2;
 fift -> next = six;

 six -> data = 4;
 six -> next = NULL;

    sort(first);
    //create(10,A);
    //display(head);
    rm_duplicate(head);
    display(head);
    exit(0);
}
