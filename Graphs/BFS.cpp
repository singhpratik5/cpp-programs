#include<iostream>
//#include<queue>
using namespace std;

class queue
{
    int front = -1,rear = -1;
    int size,*array;
    public :
        
        void getsize(int x)
        {
            cout<<"Enter the size of the queue"<<endl;
            cin>>size;
            array = new int[size];
        }
        void enqueue(int x)
        {
            array[++rear] = x;
        }

        int dequeue()
        {
            return array[++front];
        }

        bool isEmpty()
        {
            if(rear == -1)
                return true;
            else
                return false;
        }
};
void BFS(int start,int n,int arr[][7])
{
    queue q;
    q.getsize(6);
    int visited[7] = {0};
    int i = start,j;
    cout<<i<<" ";
    visited[i] = 1;
    q.enqueue(i);

    while(!q.isEmpty())
    {
        //cout<<121;
        i = q.dequeue();
        for(j = 1;j<n;j++)
        {
            if(arr[i][j] == 1 && visited[j] == 0)
            {
                cout<<j<<" ";
                visited[j] = 1;
                q.enqueue(j);
            }
        }
    }
}
int main()
{
    int i;
   int G[7][7]={{0,0,0,0,0,0,0},
                {0,0,1,1,0,0,0},
                {0,1,0,0,1,0,0},
                {0,1,0,0,1,0,0},
                {0,0,1,1,0,1,1},
                {0,0,0,0,1,0,0},
                {0,0,0,0,1,0,0}};
    cout<<"Enter the node to traverse BFS"<<endl;
    cin>>i;
    BFS(i,7,G);
}