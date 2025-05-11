#include<iostream>
#include<stack>
using namespace std;

class queue
{
    public:

        int *arr;
        int front;
        int back;
        int size;

    void enqueue(int x)
    {
        back++;
        arr[back] = x;
    }

    int dequeue()
    {
        int x = arr[++front];
        return x;
    }
    bool isempty()
    {
        if(back == -1 || front >= back)
        {
            free(arr);
            return true;
        }
        return false;
    }
};

int main()
{
    int N;
    cout<<"Enter the size of the queue"<<endl;
    cin>>N;
    queue q;
    q.front = q.back = -1;
    q.size = N;
    q.arr = new int[N];
    cout<<" Enter the elements in the queue : - "<<endl;
    int x;
    for(int i = 0;i<q.size;i++)
    {
        cin>>x;
        q.enqueue(x);
    }

    stack <int> stk;
    while(!q.isempty())
    {
        stk.push(q.dequeue());
    }
    for(int i = 0;i<q.size;i++)
    {
        q.enqueue(stk.top());
        stk.pop();
    }
    

    for(int i = q.front+1;i<=q.back;i++)
        cout<<q.arr[i]<<" ";
}