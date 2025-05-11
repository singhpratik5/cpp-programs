#include<iostream>
#include<string>
using namespace std;

int countin(char ch)
{

}

int countout(char ch)
{

}

int valid_length(string str)
{
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == '[')
        {
            countin(str[i]);
        }
    }
}