#include<iostream>
using namespace std;

//mystery series btw. 1-50.
void mys_series(float data)
{
while(data <=50 && data >= 1)
{   int i;
    for(i=0;i<2;i++)
    {
    if(i%2==0)
    {
    cout<<data<<endl;
    data = ((data*2)/3) + 5;
    }
    else
    {
        cout<<data<<endl;
        data = (data * 3/2) +3;
    }
    }
}
}

int main()
{
    float data = 5;
    mys_series(data);
    return  0;
}

