#include<iostream>
using namespace std;

class student{

    //protected :
    int id;

    public :
        int rollno;
        void setid()
        {
            int data;
            cout<<"Enter the id of stu/pro.."<<endl;
            cin>>data;
            id = data;
        }
        void getid()
        {
            cout<<"id of the student/pro... is "<<id<<endl;
        }
};

class programmer : private student{

    public :
    void access();
    void output();

};

void programmer :: access()
{
    setid();
    cout<<" Enter roll number"<<endl;
    cin>>rollno;
}
void programmer :: output()
{
    getid();
    cout<<"The roll number of the students is : "<<rollno<<endl;
}

class programmer2 : protected student{

    
    public :
    void access();
    void output();
};
void programmer2 :: access()
{
    setid();
    cout<<" Enter roll number"<<endl;
    cin>>rollno;
}
void programmer2 :: output()
{
    getid();
    cout<<"The roll number of the students is : "<<rollno<<endl;
}

int main()
{
    programmer2 thakur;
    thakur.access();
    thakur.output();
}
