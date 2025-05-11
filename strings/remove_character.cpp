#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string rm_ch(string str,int position)
{   
    if(position == 0)
        str = str.substr(1,str.size());
    else if(position == str.size() - 1)
        str = str.substr(0,str.size()-2);
    else
        str = str.substr(0,position) + str.substr(position + 1,str.size()-1);

        return str;
}

int main()
{
    string str;
    int pos;
    cout<<"enter the string"<<endl;
    cin>>str;
    cout<<"enter position to remove ch."<<endl;
    cin>>pos ;
    cout<<rm_ch(str,pos)<<endl;
    exit(0);
}