#include<iostream>
using namespace std;

int series(int num)
{
    int sum = 0,i;
    for(i = num;i>0;i--)
    {
        sum = sum + i*i;
    }
    return sum;
}
int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
    cout<<series(num)<<endl;
}