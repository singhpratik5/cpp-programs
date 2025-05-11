#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string largest(string str)
{
    int count = 0,maxcount = 0,flag = 0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == ' ')
        {
            count = 0;
        }
        else
        {
        count++;
        }
        if(count >= maxcount)
        {
            maxcount = count;
            flag = i - count+1;
        }
    }
    return str.substr(flag,maxcount + 1);
}

int main()
{
    string str;
    cout<<"enter the string to find the largest word"<<endl;
    getline(cin,str);
    cout<<largest(str)<<endl;
    exit(0);
}