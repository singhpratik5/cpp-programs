#include <iostream>
#include <stack>
#include<vector>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
} *root = NULL;

struct Node *insert(struct Node *p, int data)
{
    struct Node *t = NULL;
    t = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        t->left = t->right = NULL;
        t->data = data;
        // root = t;
        return t;
    }
    else if (p->data > data)
    {
        p->left = insert(p->left, data);
    }
    else
    {
        p->right = insert(p->right, data);
    }
}

class queue
{
    int front = -1, rear = -1;
    struct Node **array;
    int size;

public:
    void create(int size)
    {
        cout << "Enter the size of the queue" << endl;
        cin >> size;
        array = new Node *[size];
    }
    void enqueue(struct Node *p)
    {
        if (!isFull())
        {
            array[++rear] = p;
        }
    }
    struct Node *dequeue()
    {
        if (!isEmpty())
            return array[++front];
    }
    bool isEmpty()
    {
        if (rear == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (rear == size)
            return true;
        else
            return false;
    }
};

void preorder(struct Node *p)
{
    stack<Node *> stk;
    stk.push(p);

    while (!stk.empty())
    {
        Node *curr = stk.top();
        stk.pop();

        cout << curr->data << " ";
        if (curr->right != NULL)
        {
            stk.push(curr->right);
        }
        if (curr->left)
        {
            stk.push(curr->left);
        }
    }
}

void inorder(struct Node *p)
{
    if (p)
    {
        inorder(p->left);
        cout << p->data << " ";
        inorder(p->right);
    }
}

void postorder(struct Node *p)
{
    queue q;
    q.enqueue(p);

    int i = 0;
    struct Node *temp;

    while (!q.isEmpty())
    {
        struct Node *curr = q.dequeue();
        if (i == 0)
        {
            //temp = curr->data;
        }
        i++;
        if (curr->left)
        {
            q.enqueue(curr->left);
        }
        if (curr->right)
        {
            q.enqueue(curr->right);
        }
        cout << curr -> data << " ";
    }
}
void postorder2(struct Node *p)
{
    if (p == NULL)
    {
        return;
    }    
    postorder2(p->left);
    postorder2(p->right);
    cout << p->data << " ";
}

int coutleaves(struct Node *root)
{
}

int sum_tree(struct Node *p)
{
    int sum = 0;
    if (p != NULL)
    {
        sum = sum + p->data + sum_tree(p->left) + sum_tree(p->right);
    }
    return sum;
}
int size(struct Node *p)
{
    int size_of_tree = 0;
    // cout<<sizeof(p)<<endl;
    if (p != NULL)
    {
        size_of_tree = size_of_tree + sizeof(p) + size(p->left) + size(p->right);
    }
    return size_of_tree;
}
int countNonLeafNodes(Node *root)
{
    if (root == NULL)
        return 0;
    int count = 0;
    if (root->left != NULL || root->right != NULL || root->left && root->right)
    {
        count++;
    }

    count = count + countNonLeafNodes(root->left) + countNonLeafNodes(root->right);
    return count;
}
void leftview(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
    {
        cout << root->left->data << " ";
        root = root->left;
    }
    else if (root->right)
    {
        cout << root->right->data << " ";
        root = root->right;
    }
    leftview(root);
}
void rightview(Node *root)
{
    if (root == NULL)
        return;

    queue q;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        struct Node *curr = q.dequeue();

        cout << curr->data << " ";

        if (curr->right)
        {
            q.enqueue(curr->right);
        }
        else if (curr->left)
        {
            q.enqueue(curr->right);
        }
    }
}

int height(struct Node *p)
{
    int hgt = 0;
    if (p == NULL)
        return 0;

    /*  if(height(p -> left) > height(p -> right))
      {
          hgt = hgt + height(p->left) + 1;
      }
      else
      {
          hgt = hgt + height(p -> right) + 1;
      }
      */
    hgt = hgt + (height(p->left) > height(p->right)) ? height(p->left) + 1 : height(p->right) + 1;
    return hgt;
}
int roof_leaf_sum(struct Node *p)
{
    if (p == NULL)
        return 0;

    int sum = 0;
    sum = sum + p->data * 10 + p->left->data;
    //(p-> data *10 + p -> left -> data);
    //(p -> data *10 + p -> right -> data);
    roof_leaf_sum(p->left);
    roof_leaf_sum(p->right);
}
void levelorder(struct Node *p)
{
     if(p == NULL)
       return;

    queue q;
    cout<<p -> data <<" ";
    q.enqueue(p);

    while (!q.isEmpty())
    {
        p = q.dequeue();
        //cout<<curr -> data<<" ";
        if (p->left != NULL)
        {
            cout<<p -> left -> data<<" ";
            q.enqueue(p->left);
        }

        if (p->right != NULL)
        {
            cout<<p -> right -> data<<" ";
            q.enqueue(p->right);
        }
    }
}

void lvlorder(struct Node *p)
{
    if(p == NULL)
        return;
    
    cout<<p -> data<<" ";
    if(p -> left && p -> right)
     //   lvlorder(p ->left) && lvlorder(p -> right);
        
    if(p -> right)
       lvlorder(p -> right);
       
}
int perfect_BinTree(struct Node *p)
{
if(p == NULL)
    return 1;

if(p -> left && !p -> right)
    return 0;

if(!p -> left && p -> right)
    return 0;

return perfect_BinTree(p ->left) && perfect_BinTree(p ->right);
}

void mirror_tree(struct Node *p)
{
    if(p == NULL)
        return;

    if(p ->left && p -> right || p -> left && !p -> right || !p -> left && p -> right)
    {
        struct Node *temp = p -> left;
        p -> left = p -> right;
        p -> right = temp;
    }

    mirror_tree(p -> left);
    mirror_tree(p -> right);
}

vector<int> no_sibling(struct Node* p)
{
    vector<int> v;
    if(p == NULL)
        return v;

    if(p -> left && !p -> right)
        v.push_back(p ->left -> data);

    else if(!p -> left && p -> right)
        v.push_back(p -> right -> data);

    no_sibling(p->left);
    no_sibling(p->right);

     for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return v;
}

int shortest_dist(int data1,int data2,struct Node* p)
{
    int dist,flag = 0;

    if(p == NULL)
        return 0;

    if(p -> data == data1)
    {
        dist = 0;
        flag = 1;
    }
    if(flag == 1)
        dist++;
        
    if(p -> data == data2)
    {
        return dist;
    }
    shortest_dist(data1,data2,p -> left);
    shortest_dist(data1,data2,p -> right);
}

void iterative_pre(struct Node *p)
{
    stack<struct Node*>stk;
    while(p!=NULL || !stk.empty())
    {
        if(p != NULL)
        {
            cout<<p ->data<<" ";
            stk.push(p);
            p = p ->left;
        }
        else
        {
            p = stk.top();
            stk.pop();
            p = p -> right;
        }
    }
}

void iterative_in(struct Node*p)
{
    stack<struct Node*>stk;
    while(p != NULL || !stk.empty())
    {
        if(p != NULL)
        {
            stk.push(p);
            p = p -> left;
        }
        else
        {
            p = stk.top();
            stk.pop();
            cout<<p -> data<<" ";
            p = p -> right;
        }
    }
}
void iterative_post(struct Node *p)
{
    stack<struct Node*> stk;
    struct Node*prev = NULL;
    do
    {
        while(p!=NULL)
        {
            stk.push(p);
            p = p -> left;
        }
        while(p == NULL &&  !stk.empty())
        {
            p = stk.top();
            if(p ->right ==  NULL || p -> right == prev)
            {
                cout<<p->data<<" ";
                stk.pop();
                prev = p;
                p = NULL;
            }
            else
                p =  p -> right;
        }
    } while(!stk.empty());
}



vector<struct Node*>oddnodes(struct Node* p)
{
    int count = 1;
    vector<struct Node*>v;

    if(count%2 == 1)
    {
        v.push_back(p);
    }
    count++;
    //oddnodes(p->left);
}

void levelodr(struct Node* p)
{
    queue q;
    if(p == NULL)
        return;

    q.enqueue(p);
    q.enqueue(NULL);

    while(!q.isEmpty())
    {
        struct Node *t = q.dequeue();
        if(t!=NULL)
            cout<<t->data<<" ";

        if(t -> left)
        {
            q.enqueue(t-> left);
        }
        if(t-> right)
        {
            q.enqueue(t -> right);
        }
        if(!q.isEmpty())
        {
            q.enqueue(NULL);
        }
    }
}
struct ListNode
{
    int data;
    struct ListNode *next;
}*head = NULL;

void tree_linkedL(struct ListNode *p)
{
    struct Node *q = root;
    if(p==NULL)
    {
        return;
    }
    else
        q -> data = p -> data;
        p = p -> next;

    while(p != NULL)
    {
        if(p -> data < q -> data)
        {
            q -> left = insert(q -> left,p -> data);
            p = p -> next;
        }
        else
        {
            q -> right = insert(q -> right,p -> data);
            p = p -> next;
        }
    }
}

int main()
{
    root = insert(root, 34);
    insert(root, 2);
    insert(root, 44);
    insert(root, 4);
    insert(root, 51);
    insert(root, 23);
    // inorder(root);
    //cout << endl;
    /// preorder(root);
    //cout << endl;
    //iterative_post(root);
    cout << endl;
    //postorder2(root);
    // cout<<sum_tree(root);
    //   cout<<endl;
    // cout<<size(root);
    // cout<<endl;
    // cout<<sizeof(struct Node*);
    // cout<<countNonLeafNodes(root);
    // leftview(root);
    // rightview(root);
    // cout<<height(root)<<" ";
    //levelodr(root);
    //perfect_BinTree(root);

    //mirror_tree(root);
    //inorder(root);
    //vector<int>v;
    //v = no_sibling(root);

    //cout<<shortest_dist(2,51,root);
    //iterative_pre(root);
    //iterative_in(root);
    
    struct ListNode* first;
    struct ListNode*sec;
    struct ListNode*thi;
    struct ListNode*fort;

    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head -> data = 5;
    head -> next = first;
    first -> data = 2;
    first -> next = sec;
    sec -> data = 1;
    sec -> next = thi;
    thi -> data = 10;
    thi ->next = fort;
    fort -> data = 3;

    fort -> next = NULL;

    tree_linkedL(head);
    preorder(root);
}