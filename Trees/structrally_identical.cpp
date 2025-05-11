#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

int are_identical(struct Node *root1,struct Node *root2)
{
    if(root1 == NULL && root2 ==  NULL)
    {
        return 1;
    }
    if(root1 == NULL || root2 == NULL)
        return 0;

    return (root1  -> data == root2 -> data && are_identical(root1 -> left,root2 -> left) && are_identical(root1 -> right,root2 -> right));
}

int diameter(struct Node* root,int *ptr)
{
    int  left,right;
    if(!root)
        return 0;
    
    left = diameter(root ->  left,ptr);
    right = diameter(root ->right,ptr);

    if(left +right > *ptr)
        *ptr =  left+right;
    return  max(left,right)+1;
}



    vector<int> largestValues(Node* root)
    {
        int maxvalue = 0;

        vector<int>max;
        queue<Node*>q;
        

            q.push(root);
            q.push(NULL);
            
            while(!q.empty())
            {
                Node* temp = q.front();
                q.pop();
                if(temp -> data > maxvalue)
                    maxvalue = temp -> data;
                    
                if(temp == NULL)
                {
                    max.push_back(maxvalue);
                    maxvalue = 0;
                }
                if(temp -> left)
                    q.push(temp -> left);
                    
                if(temp -> right)
                    q.push(temp -> right);
                    
                if(q.front() == NULL)
                    q.push(NULL);
            }
    for(int i = 0;i<max.size();i++)
    {
        cout<<max.at(i);
    }
        return max;
        
    }

int  main()
{
    struct Node*root1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node*root2 = (struct Node*)malloc(sizeof(struct Node));

    root1 -> data = 1;
    root2 -> data = 1;

    root1 -> left = root1  ->right = root2 ->left = NULL;
    root2 ->right = (struct Node*)malloc(sizeof(struct Node));
    root2 -> right -> data = 3;
    root2 -> left = (struct Node*)malloc(sizeof(struct Node*));
    root2 -> left -> data = 2;


    //cout<<are_identical(root1,root2)<<" ";

    //cout<<diameter(root2,0);

    vector<int> temp = largestValues(root2);
    for(int i = 0;i<temp.size();i++)
    {
        cout<<temp.at(i);
    }
}