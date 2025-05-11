#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string long_palin(string str)
{
    int i,j,f1,f2;
    int n = str.size();
    i = 0,j = n - 1;
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            if(str[i] == str[j])
            {
                f1 = i,f2 = j;
            }
        }
    }
    string newstr = "";
    for(j=f1;j<=f2;j++)
    {
        newstr = newstr + str[j];
    }
    return newstr;
}

int main()
{
    string s;
    cout<<"enter the string to find longest palindrome"<<endl;
    cin>>s;
    cout<<long_palin(s)<<endl;
    exit(0);
}
