#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;

    public :
        void read(void);
        int check_bin(void);
        void ones(void);
        void display(void);
};

void binary :: read()
{
    //string s;
    cout<<"enter an string to check"<<endl;
    cin>>s;
}

int binary ::check_bin()
{
    for(int i=0;i< s.size();i++)
    {
        if(s.at(i)!= '1' && s.at(i)!= '0')
        {
            cout<<" not binary format"<<endl;
            return 0;
        }
    }
    cout<<"binary"<<endl;
    return 1;
}
void binary :: ones()
{
    if(check_bin()==1)
    {
        for(int i = 0;i<s.length();i++)
        {
            if(s.at(i)== '1')
                s.at(i) = '0';
            else
                s.at(i) = '1';
        }
    }
}
void binary :: display()
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i)<<"";
    }
}

int main()
{
    binary num;
        num.read();
    
        num.ones();
        num.display();
       // num.check_bin();
    exit(0);
}