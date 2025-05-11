#include<iostream>
#include<string>
using namespace std;

string shift(string str)
{
    int i;
    for(i=0;i<str.size();i++)
    {
        if(int(str[i])>=91 && int(str[i])<=122)
        {
            str[i]++;
        }
    }
    return str;
}

int main()
{
    string str = "abc4def";
    cout<<shift(str)<<endl;
    exit(0);
}