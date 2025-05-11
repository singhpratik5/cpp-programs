#include<iostream>
using namespace std;
#define N 5
void n_swap(int& x,int& y)
{
    int t = x;
    x = y;
    y = t;
}
int  swap(int num)
{
    int digits[N];
    int ndigit,i=0;
    while(num>0)
    {
        ndigit = num%10;
        digits[i] = ndigit;
        num = (num - ndigit)/10;
        i++;
    }
    n_swap(digits[0],digits[N-1]);
    for(i=1;i<N-1;i++)
    {
        n_swap(digits[i],digits[N-1-i]);
    }
    int newnum = 0;
    for(i=0;i<N;i++)
    {
        newnum = newnum*10 + digits[i];
    }
    return newnum;
}

int main()
{
    int num = 12345;
    int newnum = swap(num);
    cout << newnum << endl;
    return 0;
}