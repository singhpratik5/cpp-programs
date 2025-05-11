#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str = "PRATIK";
    string str1("THAKUR");
    // to take input with spaces we use getline
    string str2;
    cout<<"enter the string"<<endl;
    getline(cin,str2);
    cout<<str2<<endl;
    cout<<str<<" "<<str1<<endl;
    exit(0);
}