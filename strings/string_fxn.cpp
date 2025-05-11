#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int main()
{
    string str = "abcdef";
    //reverse
    reverse(str.begin(),str.end());

    //+ operator
    string str2 = str.substr(0,4)+str;
    // str catination
    //strcat(str,str2);
    
    //substring
    cout<<str.substr(1,2)<<endl;
    cout<<str2<<endl;

    //pushback
    char ch = 'p';
    str.push_back(ch);
    cout<<str<<endl;

    //size of string
    cout<<str.size()<<endl;

    //convert number into string 
    int num = 12345;
    string strnew = to_string(num);
    
    reverse(strnew.begin(),
    strnew.end());
    cout<<strnew<<endl;
    exit(0);
}