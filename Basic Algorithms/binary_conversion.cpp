#include<iostream>
#include<math.h>
using namespace std;

void dec_to_bin(int num)
{
    double rem;
    long long int ans =  0;
    int mult = 1;
    while(num>0)
    {
        rem = num%2;
        num = num/2;

        ans = ans + mult*rem; 
        //cout<<ans<<endl;
        mult = mult*10;
    }
    cout<<ans;
}

int main()
{
    int num;
    cout<<" Enter the no. to convert to binary"<<endl;
    cin>>num;
    dec_to_bin(num);
    exit(0);
}