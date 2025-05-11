#include<iostream>
using namespace std;

void birthday(int days)
{
   if(days == 0)
   {
    cout<<"Happy Birthday Boys"<<endl;
    return;
   } 
   cout<<days<<"---> days left in birthday"<<endl;

    birthday(days-1);
}

int main()
{
    int days;
    cout<<"Enter the days : ";
    cin>>days;

    birthday(days);

    exit(0);
}