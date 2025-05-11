#include <iostream>
#include <string>
using namespace std;

string arr[] = {
    "aabdarsh","aabruna","aabm","aabbhi","aabj"
};
int min_size()
{
    int min = arr[0].size();
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        if(arr[i].size() < min)
        {
            min = arr[i].size();
        }
    }
    return min;
}

int common_prefix()
{
    int i,j,flag = 0;
    string strnew = " ";
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<min_size();i++)
    {
        int count = 0;
        for(j=0;j<n;j++)
        {
            if(arr[j].substr(i,1) == arr[i].substr(i,1))
            {
                count++;
            }
        }
        //cout<<count<<endl;
        if(count == n)
        {
        flag++;
        }
    }
    return flag;
}

int main()
{
    cout<<common_prefix()<<endl;
}
