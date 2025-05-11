#include<iostream>
using namespace std;

void printnum(int num)
{
    if(num == 0)
        return;

    
    printnum(num-1);
    cout<<num<<endl;
    
}

int main()
{
    int num;
    cout<<"enter num"<<endl;
    cin>>num;

    printnum(num);

    exit(0);
}

