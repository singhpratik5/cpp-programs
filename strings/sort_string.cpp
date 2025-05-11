#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "pratiksingh";
    int freq[26];
    int i;
    for(i=0;i<26;i++)
    {
        freq[i] = 0;
    }
    
    //char c;
    for(i=0;i<str.length();i++)
    {
        int j = str[i] - 'a';
        freq[j]++;
    }
    int j = 0;
    for(i=0;i<26;i++)
    {
        while(freq[i]--)
        {
            str[j++] = 'a' + i;
        } 
    }
    for(i=0;i<str.length();i++)
    {
        cout<<str[i];
    }
    exit(0);
}