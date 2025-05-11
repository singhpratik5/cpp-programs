#include<iostream>
#include<string>

using namespace std;

string exchange(string str)
{
    int i;
    char temp = str[0];
    str[0] = str[str.size() - 1];
    str[str.size()-1] = temp;
    return str;
}

int main()
{
    string s("abcdefgh");
    cout<<exchange(s)<<endl;
    exit(0);
}