#include <iostream>
#include <queue>
using namespace std;

void k_closest(int arr[], int n, int x, int k)
{
    priority_queue<pair<int, int>> pq;
    for(int i=0;i<k;i++)
    {
        pq.push({abs(arr[i]-x),i});
    }
    for(int i=k;i<n;i++)
    {
        int diff=abs(arr[i]-x);
        if(pq.top().first>diff)
        {
            pq.pop();
            pq.push({diff,i});
        }
    }
    while(pq.empty()==false)
    {
        cout<<arr[pq.top().second]<<" ";
        pq.pop();
    }
}

int main()
{
    int arr[]={10,30,5,40,38,80,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    k_closest(arr,n,35,3);
    
    return 0;
}