#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;

int length_substr(string str)
{
int maxlength = 0,length = 0;
for(int i = 0;i<str.length();i++)
{
    if(length > maxlength)
        maxlength = length;
    for(int j = i+1;j<str.length();j++)
    {
        if(str.at(j) != str.at(i))
            length++;
    }
}
    return maxlength;
}

int main()
{
string str;
cout<<"Enter the string"<<endl;
cin>>str;
cout<<length_substr(str);
exit(0);
}