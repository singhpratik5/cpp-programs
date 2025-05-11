#include<iostream>
using namespace std;

class queue
{
    int capacity;
    int size = 0;
    int front = -1,back = -1;
    int *array;

    public:
        queue()
        {

        }
        void getcapacity()
        {
            int x;
            cout<<" Enter the capacity"<<endl;
            cin>>x;
            capacity = x;
        }
        void create()
        {
            array = new int[capacity];
        }
        bool isfull()
        {
            if(size == capacity)
            {
                return true;
            }
            return false;
        }

        bool isempty()
        {
            if(size == 0)
                return true;
            else
                return false;
        }

        void enqueue(int data)
        {
            if(!isfull())
            {
                array[++back] = data;
                size++;
            }
            else
            {
                cout<<"queue is full"<<endl;
            }
        }

        int dequeue()
        {
            if(!isempty())
            {
                front++;
                size--;
                return array[front];
            }
            else
            {
                cout<<"Queue is empty"<<endl;    
            }
        }
};

int main()
{
    queue q;
    q.getcapacity();
    q.create();
    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);


    cout<<q.dequeue()<<""<<endl;
    cout<<q.dequeue()<<""<<endl;
    cout<<q.dequeue()<<""<<endl;
    cout<<q.dequeue()<<""<<endl;
    cout<<q.dequeue()<<""<<endl;

    exit(0);
}
