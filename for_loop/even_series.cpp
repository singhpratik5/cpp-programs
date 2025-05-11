#include<iostream>
using namespace std;

float sq(float N,int i)
{
    int sqr = 1;
    for(int j = 0; j<2*i;j++)
    {
        sqr = sqr*N;
    }
    return sqr;
}

float fact(int num)
{
    //int  = num*2;
    if(num ==1)
    return 1;

    return num*fact(num - 1);
}

float series(int num,int x)
{
    float sum = 0.0;
    for(int i=0;i<num;i++)
    {
        if(i == 0)
        {
            sum = sum + 1;
        }
        else if(i%2 == 1)
        {
            sum = sum - sq(x,i)/fact(2*i);
        }
        else
        {
            sum = sum + sq(x,i)/fact(2*i);
        }
    }
    return sum;
}

int main()
{
    int num;
    int x;
    cout<<"enter n and num of series"<<endl;
    cin>>num>>x;
    //cout<<fact(5)<<endl;
    //cout<<sq(num,x)<<endl;
    cout<<series(num,x)<<endl;
}