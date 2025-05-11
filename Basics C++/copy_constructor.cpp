#include<iostream>
using namespace std;

class num{
    int x;

    public :
        num(){
            x = 0;
        };
        num(int a)
        {
            x = a;
        }
        num(num &obj)
        {
            cout<<" Copy constructor called"<<endl;
            x = obj.x;
        }
        void printnum()
        {
            cout<<" Number is - "<<x<<endl;
        }
};

int main()
{
    num a,b,c;
    c = 25;

    num c1(c);
    num c2 = c;
    a.printnum();
    b.printnum();
    c.printnum();
    c1.printnum();
    c2.printnum();
}