#include<iostream>
using namespace std;

int main()
{
    int  i,j;
    for(i=0;i<20;i++)
    {
        for(j=0;j<30;j++)
        {
            if(i=0)
            {
            cout<<" "<<endl;
            }
            if(j<7)
            {
                cout<<"*";
                j++;
            }
        }
    }
}