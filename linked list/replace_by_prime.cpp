#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head = NULL;

void display(struct Node *list)
{
    while(list != NULL)
    {
    cout<<list -> data <<"->";
    list = list -> next;
    }
}

int check_prime(int data)
{
    if(data == 1 || data == 2 || data == 3)
    {
    return 1;
    }
    else
    {
    for(int i = 2;i < data;i++)
    {
        if(data%i == 0 && data != 2 && data != 3)
        {
            return 0;
        }
    }
    }
    return 1;
}

int nearest_prime(int data)
{
    int i = data, j = data;
    while(check_prime(i) != 1 || check_prime(j) != 1)
    {
        i = i - 1;
        j = j + 1;
    if(check_prime(i)==1)
    return i;
    else if(check_prime(j)==1)
    return j;
    }
    
  /*  if(check_prime(data-1)==1)
    return data - 1;
    else if(check_prime(data+1)==1)
    return data + 1;
    else if(check_prime(data - 2)==1)
    return data - 2;
    else if(check_prime(data + 2)==1)
    return data + 2;
    else return data - 3;
    */
}

struct Node *replace_list(struct Node *p)
{
    struct Node *q = p;
    while(q != NULL)
    {
        if(check_prime(q -> data) == 0)
        {
            q -> data = nearest_prime(q -> data);
        }
        q = q -> next;
    }
}

int main()
{
    head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* sec = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 2;
    head -> next = sec;

    sec -> data = 104;
    sec -> next = third;

    third -> data = 24;
    third -> next = NULL;

    replace_list(head);
    display(head);
    exit(0);
}