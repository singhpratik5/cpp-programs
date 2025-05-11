#include<iostream>
using   namespace   std;

class queue
{
private:
    int size;
    int f1 = -1,f2 = size,b1 = -1,b2 = size;
    int *arr;
public:
    void getsize()
    {
        cout<<" Enter the size"<<endl;
        cin>>size;
        arr = new int[size];
    }
    void enqueue1(int x)
    {
        if(b2 - b1 == 1)
        {
            cout<<" Queue is full"<<endl;
        }
        else
        arr[++b1] = x;
    }
    void enqueue2(int x)
    {
        if(b1 + 1 == b2)
        {
            cout<<"Queue is full"<<endl;
        }
        else
        arr[--b2] = x;
    }
    int dequeue1()
    {
        if(b1 == -1 || f1 == b1)
        cout<<"Queue is empty"<<endl;
        else
        return arr[++f1];
    }
    int dequeue2()
    {
        if(b2 == size || f2 == b2)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        return arr[--f2];
    }
};

int main()
{
    queue q;
    q.getsize();
    q.enqueue1(1);
    q.enqueue2(5);
    q.enqueue1(2);
    q.enqueue1(3);
    q.enqueue2(4);
    cout<<q.dequeue1();
    cout<<q.dequeue1();
    cout<<q.dequeue1();
    cout<<q.dequeue2();
    cout<<q.dequeue2();
    cout<<q.dequeue2();

}
