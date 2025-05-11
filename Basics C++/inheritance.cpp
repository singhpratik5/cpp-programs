#include<iostream>
using namespace std;

class employee{

    int salary;
    public :

        void setSalary(int x)
        {
            salary = x;
        }
        void getSalary()
        {
            cout<<" The salary of the programmer cum  employee is :"<<salary<<endl;
        }
        int id = 0;
};

class games{

    public:
    
    char game[100];

};

class programmer : public employee {

    int coding_lvl = 8;
    public :
        void set_id(int n)
        {
            id = n;
        }
        void set_lvl(int n)
        {
            coding_lvl = n;
        }
        void get_id()
        {
            cout<<" id of the programmer is :"<<id<<endl;
            id++;
        }
        void get_lvl()
        {
            cout<<" Coding lvl of programmer is :" <<coding_lvl<<endl;
        }

        
};

int main()
{
    programmer pratik;
    programmer thakur;
    pratik.set_id(5);
    pratik.set_lvl(9);
    pratik.get_id();
    pratik.get_lvl();
    thakur.set_id(6);
    thakur.set_lvl(8);
    thakur.get_id();
    thakur.get_lvl();
    pratik.setSalary(2000000);
    pratik.getSalary();
    thakur.setSalary(1500000);
    thakur.getSalary();
}