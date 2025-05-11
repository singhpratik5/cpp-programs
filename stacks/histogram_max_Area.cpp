#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

stack <int> stk;

class maxArea
{
    public :
    maxArea(){};
    int maxarea = 0,Area;
    maxArea()
    {
        int min = 0;
        
            temp = stk.top();
        while(!stk.empty())
        {
            if(temp )
            Area = temp;
            if(Area > maxarea)
            {
                maxarea = Area;
            }
            stk.pop();
        }

    }
};

int main()
{
    int N;
    cout<<" Enter the no. of bars"<<endl;
    cin>>N;
    int Arr[N];
    cout<<" Enter the elements"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>Arr[i];
        stk.push(Arr[i]);
    }
    maxArea();
}
