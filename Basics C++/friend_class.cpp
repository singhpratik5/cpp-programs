#include<iostream>
using  namespace std;

class complex;

class calculator
{
    public :
        int add(int a,int b)
        {
            return (a+b);
        }
        int productRealCox(complex c1,complex c2);
};
class complex{

    int a,b;
    friend int calculator :: productRealCox(complex c1,complex c2);
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

int calculator :: productRealCox(complex c1,complex c2)
{
    return (c1.a*c2.a);
}

int main()
{
    complex c1,c2,c3;
    c1.setNumber(1,5);
    c2.setNumber(4,10);
    
    //c1.printNumber();
    //c2.printNumber();
    calculator calc;
    int res = calc.productRealCox(c1,c2);
    cout<<res<<endl;
    c3 = sumComplex(c1,c2);
    c3.printNumber();
}