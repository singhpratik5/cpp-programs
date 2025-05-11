#include<iostream>
#include<vector>
#include<stack>
using namespace std;

stack <char> s;

void operation(vector<char> score)
{
    for(int i=0;i<score.size();i++)
    switch (score.at(i))
    {
    case 'C':
        if(!s.empty())
            s.pop();
        break;
    case 'D':
        if(!s.empty())
            s.push(2*s.top());
            break;
    case  '+':
        s.push(score.at(i)+s.top());
            break;
    default:
        s.push(score.at(i));
        cout<<score.at(i)<<" ";
        break;
    }
}

int main()
{
    vector<char> stack;
    char ch;
    int N;
    cout<<"Enter the no. of scores"<<endl;
    cin>>N;
    cout<<"Enter the scores"<<endl;
    for(int i =0;i<N;i++)
    {
        cin>>ch;
        stack.push_back(ch);
    }
   // cout<<stack.size();
    operation(stack);


    int sum = 0;

    while(!s.empty())
    {
        sum = sum + s.top();
        cout<<sum<<" ";
        s.pop();
    }
    cout<<" The sum is : -  "<<sum<<endl;
    exit(0);
}
