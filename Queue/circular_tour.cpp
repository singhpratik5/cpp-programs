#include<iostream>
using namespace std;

class queue
{
    int front = -1,rear = -1;
    int *array;
    int size;

    public :
        void getsize(int x)
        {
            size = x;
            array = new int[size];
        }
        void enqueue(int x)
        {
            array[rear%size ++] = x;
        }
        int dequeue()
        {
            return array[front %size ++];
        }
};

int circular(int pp[],int dis[])
{

}

int main()
{
    
}