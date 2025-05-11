//isomorphic - one to one character mapping.
#include<iostream>
#include<string>
using namespace std;

int check_iso(string s1,string s2)
{
    int i;
    if(s1.length() != s2.length())
        return 0;

    int count = s1[0] - s2[0];
    for(i=0;i<s1.length();i++)
    {
        if(s1[i] - s2[i] != count)
            return 0;
    }
        return 1;
}

int main()
{
    string s1 = "acc";
    string s2 = "bdd";
    cout<<check_iso(s1,s2)<<endl;
    exit(0);
}