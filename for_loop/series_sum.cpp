#include<iostream>
using namespace std;

int series(int num)
{
    int sum = 0,i;
    for(i=1;i<=num;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            sum = sum + j;
        }
    }
    return sum;
}

int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    cout<<series(num)<<endl;
}