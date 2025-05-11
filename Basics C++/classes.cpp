#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private :
        int a,b,c;
        string surname;
    public :
        int d,e;

    void setData(int a1,int b1, int c1);
    void setSurname(string str);
    void getData()
    {
        cout<<" value of a is :"<<a<<endl;
        cout<<" value of b is :"<<b<<endl;
        cout<<" value of c is :"<<c<<endl;
        cout<<" value of d is :"<<d<<endl;
        cout<<" value of e is :"<<e<<endl;
        cout<<" "<<surname<<endl;
    }
};

void Employee :: setSurname(string str)
{
    surname = str;
}
void Employee :: setData(int a1,int b1,int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee thakur;
        thakur.d = 4;
        thakur.e = 5;
    thakur.setSurname("singh");
    thakur.setData(1,2,3);
    thakur.getData();
    exit(0);
}