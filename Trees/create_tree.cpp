#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}*root = NULL;

void insert(int data)
{
    if(root == NULL)
    {
        root -> data = data;
        root -> left = NULL;
        root -> right = NULL;
    }
    
}
void create(int arr[])
{
    
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    create(arr);
}