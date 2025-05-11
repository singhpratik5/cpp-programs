#include<iostream>
using namespace std;

void swap(int x,int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<endl<<y<<endl;
}

int main()
{
    int a=5;
    int b = 10;

    swap(a,b);
}