#include<iostream>
using namespace std;

class employee
{
    private:
        int id;
        int salary;
        static int count;

    public :
        void setData(void)
        {
            cout<<"Enter the id of employee";
            cin>>id;
            count++;
        }
        void getData()
        {
            cout<<"id  of employee -"<<count << "is"<<id;
        }
        static void getCount()
        {
            cout<<"enter count";
            cin>>count;
        }
};


int employee :: count;
int main()
{
    employee pratik,thakur,om;
    pratik.setData();
    pratik.getData();
    pratik.getCount();
    thakur.setData();
    thakur.getData();
    om.setData();
    om.getData();
    exit(0);
}