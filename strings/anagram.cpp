#include<iostream>
#include<string>
using namespace std;

int check(string str1,string str2)
{
    if(str1.length() != str2.length())
    return 0;

    int freq1[26],freq2[26];
    int i=0;
    for(i=0;i<26;i++)
    {
        freq1[i] = 0;
        freq2[i] = 0;
    }
    for(i=0;i<str1.length();i++)
    {
        int index = str1[i] - 'a';
        freq1[index]++;
    }
    for(i=0;i<str2.length();i++)
    {
        int index = str2[i] - 'a';
        freq2[index]++;
    }
    for(i=0;i<26;i++)
    {
        if(freq1[i] != freq2[i])
        return 0;
    }
    return 1;
}

int main()
{
    string str1 = "anagram";
    string str2 = "nagaram";
    cout<<check(str1,str2)<<endl;
    return 0;
}