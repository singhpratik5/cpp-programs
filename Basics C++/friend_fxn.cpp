#include<iostream>
using namespace std;

class complex{

    int a,b;
    public :
        void setNumber(int a1,int b1)
        {
            a = a1;
            b = b1;
        }
        void printNumber()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
        friend complex  sumComplex(complex c1,complex c2);
};

complex  sumComplex(complex c1,complex c2)
{
    complex c3;
    c3.setNumber((c1.a +  c2.a),(c1.b + c2.b));
    return c3;
}

int main()
{
    complex c1,c2,c3;
    c1.setNumber(1,5);
    c2.setNumber(4,10);
    
    c1.printNumber();
    c2.printNumber();
    c3 = sumComplex(c1,c2);
    c3.printNumber();
}