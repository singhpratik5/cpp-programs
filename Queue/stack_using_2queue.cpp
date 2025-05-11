#include<iostream>
using namespace std;

class queue
{
    int capacity;
    int arr[];          
    
    int front;
    int back;
    public:
        void setcapacity(int x)
        {
            capacity = x;
        }
        void enqueue()
        {

        }

        int dequeue()
        {

        }

};

class stack
{
    int capacity;
    public :

        void setcapacity(int x)
        {
            capacity = x;
        }
        void push(int x)
        {

        }
        int pop()
        {

        }
};

int main()
{
    queue q1,q2;
    stack stk;
    stk.setcapacity(5);
    q1.setcapacity(5);

}

