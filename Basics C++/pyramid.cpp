#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<" Enter the number "<<endl;
    cin>>N;

    if(N<=0)
    {
     cout<<"Enter a positive value"<<endl;
     return 0;
    }
    int j=1,i=1;
    for(i=1;i<N;i++)
    {
        for(j=1;j<i;j++)
        {
        cout<<i+j<<" ";
        }
        cout<<endl;
    }
}