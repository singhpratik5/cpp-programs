#include<iostream>
#include<string>
using namespace std;

string exchange(string str)
{
    for(int i = 0;i < str.size();i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        str[i] = str[i] + 32;
        else if(str[i] >= 97 && str[i] <= 122)
        str[i] = str[i] - 32;
    }
    return str;
}

int main()
{
    string str = "surendra singh SINGRAUR";
    cout<<exchange(str)<<endl;
    exit(0);
}