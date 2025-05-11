#include<iostream>
using namespace std;

class Bank
{
    int principal,years;
    float rate,returnVal;
    public :
        Bank(){};
        Bank(int p,int y,float r);
        int show();
};

Bank :: Bank(int p,int y,float r)
{
    principal = p;
    years = y;
    rate = r;

    returnVal = principal;
    for(int i =0;i<years;i++)
    returnVal = returnVal + (principal*rate)/100;
}
int Bank :: show()
{
    cout<<returnVal<<endl;
}

int main()
{
    Bank(10000,5,5).show();
}