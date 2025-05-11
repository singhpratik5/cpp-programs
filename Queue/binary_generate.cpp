#include<iostream>
using namespace std;

//int l;
void printBin(int i)
{
       // int l = 0;
       int  l = i%2;
            if(i/2>=1)
            {
                i = i/2;
                printBin(i);
            }
            cout <<l;
}

void toBin(int N)
{
    for(int i = 1;i<=N;i++)
    {
        printBin(i);
        cout<<endl;
    }
}

int main()
{
    int N;
    cout<<" enter the number to genrate binary numbers"<<endl;
    cin>>N;
    //printBin(5);
    toBin(N);
}