#include<iostream>
using namespace std;
class queue
{
    int front = -1,rear = -1;
    int size;
    public:
        int *array;
        void create(int size)
        {
            array = new int[size];
            queue :: size = size;
        }

        void enqueue(int x)
        {
            array[rear++ % size] = x;
        }
        int dequeue()
        {
            return array[front++ % size];
        }
        bool isEmpty()
        {
        return front == rear;
        }
};

int time_needed(int N,int arr[],int k)
{
    int time = 0;
    queue q;
    q.create(N);
    for(int i = 0;i<N;i++)
    {
        q.enqueue(arr[i]);
    }
    while(true)
    {
        int x = q.dequeue();
        if(x!=0)
        {
        q.enqueue(x -1);
        time++;
        if(q.isEmpty())
        {
            break;
        }
        if(time % N == k && q.dequeue() == 0)
        {
            break;
        }
        }
    }
    //cout<<time<<endl;
    return time;
}

int main()
{
    int N,k;
    cout<<"Enter the number of the people"<<endl;
    cin>>N;
    int arr[N];
    cout<<"Enter the tickets to buy"<<endl;
    for(int i = 0;i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position of the person"<<endl;
    cin>>k;
    cout<<time_needed(N,arr,k)<<endl;
}