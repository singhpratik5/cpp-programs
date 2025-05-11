#include<iostream>
using namespace std;

int check(int num)
{
    if( -2 <= (num%10) && 2 >= (num%10))
    return 1;

    return 0;
}
int fact(int num)
{   if(num < 0)
    return -1;
     if(num == 1 || num == 0)
        return 1;
    return num*fact(num-1);
}

   // fact(num) = num*fact(num-1);
   // fact(1) = 1;

int main()
{   
    int num;
   // cout<<"enter the number to check"<<endl;
    cin>>num;
    
   // cout<<check(num)<<endl;
   cout<<fact(num)<<endl;
}