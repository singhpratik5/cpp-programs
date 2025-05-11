#include<iostream>
#include<string>
using namespace std;

string capital_letter(string str)
{
    int i;
    str[0] = str[0] - 32;
    for(i=1;i<str.size();i++)
    {
        if(str[i] == ' ')
        {
            str[i+1] = str[i+1] - 32;
        }
    }
    return str;
}

int main()
{
    string str;
    cout<<"enter the string to capitallise first letters"<<endl;
    getline(cin,str);
    cout<<capital_letter(str)<<endl;
    exit(0);
}