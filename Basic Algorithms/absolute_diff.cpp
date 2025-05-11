#include<iostream>
using namespace std;

int absolute_difference(int N);

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<absolute_difference(n);
    exit(0);
}

int absolute_difference(int N)
{
    if(N>51)
    return 3*(N-51);
    else
    return 51 - N;
}
