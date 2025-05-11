#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string str_fxn(string str)
{
    if(str.substr(0,2) == "if")
    {
        return str;
    }
    else
    {   
        string  str1 = "if";
        str1 = str1 + " " + str;
        return str1;
    }
}

int main()
{
    cout<<str_fxn("in else")<<endl;
    exit(0);
}