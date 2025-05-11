#include<iostream>
using namespace std;

int add(int a,int b)
{
    if(a==b)
    return 3*a;
    else
    return a+b;
}

int main()
{
    int a,b;
    cout<<"enter the number a"<<endl;
    cin>>a;
        cout<<"enter the number b"<<endl;
    cin>>b;
   // a = 5;
   // b = 5;
    cout<<add(a,b+10)<<endl;
    exit(0);
}

