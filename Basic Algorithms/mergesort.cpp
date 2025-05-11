#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

void merge(vector<int>& arr,int si,int mid,int ei)
{
    vector<int> temp[ei-si+1];
    int i = si;
    int j = mid+1;
    int k = 0;

    while(i<=mid && j<= ei)
    {
        if(arr[i]<=arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i<=mid)
    {
        temp[k++] = arr[i++];
    }
    
    while(j<=ei)
    {
        temp[k++] = arr[j++];
    }

    for(k=0;i=si,k<sizeof(temp);i++,k++)
    {
        arr[i] = temp.at(k);
    }
}

void mergesort(vector<int>arr[],int si,int ei)
{
    if(si>=ei)
        return;

    int mid = si + (ei-si)/2;
    mergesort(arr,si,mid);
    mergesort(arr,mid+1,ei);
    merge(&arr,si,mid,ei);
}

int main()
{
    int arr[10] = {4,2,5,6,1,7,6,3,9,8};
    mergesort(arr,0,9);
    printarr(arr,10);
}