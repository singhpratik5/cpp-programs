#include<iostream>
using namespace std;

int check(int N)
{
    if(N>=90 && N<=110 || N>=190 && N <= 210)
    {
    return 1;
    }
    return 0;
}
int main()
{   int N;

    cout<<"enter the number"<<endl;
    cin>>N;
    cout<<check(N)<<endl;
    exit(0);
}