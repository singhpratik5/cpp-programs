#include<iostream>
using namespace std;

bool check(int data)
{
    if(data > 0) 
    {
        cout<<"positive"<<endl;
    return true;
    }
    else
    {
        cout<<"negative"<<endl;
        return false;
    }
}

int main()
{
    int data1 = -5;
    int data2 = 5;
    cout<<check(data1)<<endl;
    cout<<check(data2)<<endl;
    return 0;
}