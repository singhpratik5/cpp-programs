#include<iostream>
using namespace std;
#include<queue>

int main()
{
    queue<int>q;

    q.push(5);
    q.emplace(4);
    q.emplace(3);
    q.emplace(2);
    q.emplace(1);
    q.emplace(0);

    while(!q.empty())
    {
    cout<<q.front()<<" ";
    q.pop();
    }
}