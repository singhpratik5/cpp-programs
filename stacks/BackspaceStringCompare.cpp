#include<iostream>
#include<stack>
#include<vector>
using namespace std;

stack <int> stk1,stk2;
vector <char> v;

vector <char> check(int count=0)
{
    while(!stk1.empty())
    {   
        if(stk1.top()=='#')
            count++,stk1.pop();
        else if(count>0)
            stk1.pop(),count--;
        else
            v.push_back(stk1.top());
            stk1.pop();
    }
    return v;
};

int main()
{
    string s1 = "ab##d";
    string s2 = "c#d#";

    for(int i =0;i<s1.size();i++)
    {
        stk1.push(s1[i]);
    }
    for(int i =0;i<s2.size();i++)
    {
        stk2.push(s2[i]);
    }
    check();
    cout<<v.size();
    while(!v.empty())
    {
        cout<<v.data()<<" ";
        v.pop_back();
    }
   
}