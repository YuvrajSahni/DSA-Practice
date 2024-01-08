#include <iostream>
#include <algorithm>
using namespace std;

void k_closest(int arr[], int n, int x, int k)
{
    bool visited[n]={false};
    for(int i=0;i<k;i++)
    {
        int min_diff=INT16_MAX;
        int min_idx;
        for(int j=0;j<n;j++)
        {
            if(visited[j]==false && abs(arr[j]-x)<=min_diff)
            {
                min_diff=abs(arr[j]-x);
                min_idx=j;
            }
        }
        cout<<arr[min_idx]<<" ";
        visited[min_idx]=true;
    }
}

int main()
{
    int arr[]={10,30,5,40,38,80,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    k_closest(arr,n,35,3);
    
    return 0;
}