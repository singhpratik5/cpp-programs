// insert dash (-) in between odd numbers of given number.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string insert_dash(string str)
{
    int i;
     string newstr ="";
    for(i = 0;i < str.size(); i++)
    {
        if(str[i] % 2 == 1 && str[i+1]%2 == 1)
        {
            newstr += str[i] + '-';
            //str = newstr;
        }
        else
        {
            newstr = newstr + str[i];
        }
    }
    return newstr;
}

int main()
{
    string str = "12357698";
    cout<<insert_dash(str)<<endl;
    exit(0);
}