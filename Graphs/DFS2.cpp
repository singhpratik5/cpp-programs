#include<iostream>
using namespace std;

void DFS(int start,int n,int G[][7])
{
    static int visited[7] = {0};
    int i;
    
    if(visited[start] == 0)
    {
        cout<<start<<" ";
        visited[start] = 1;
        for(i = 1;i<n;i++)
        {
            if(G[start][i] == 1 && visited[i] == 0)
            {
                DFS(i,n,G);
            }
        }
    }
}

int main()
{
    int G[7][7]={{0,0,0,0,0,0,0},
                 {0,0,1,1,0,0,0},
                 {0,1,0,0,1,0,0},
                 {0,1,0,0,1,0,0},
                 {0,0,1,1,0,1,1},
                 {0,0,0,0,1,0,0},
                 {0,0,0,0,1,0,0}};
    
    DFS(3,7,G);
}