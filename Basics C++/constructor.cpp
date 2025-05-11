#include<iostream>
using namespace std;

class complex{
int a,b;
public:

    complex(void);
    void print(void)
    {
        cout<<a<<" + i"<<b<<endl;
    }
};

complex :: complex(){
    a = 1000;
    b =787;
};

int main()
{
    complex c;
    c.print();
}