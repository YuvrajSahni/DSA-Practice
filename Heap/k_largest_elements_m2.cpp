#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void k_largest(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(pq.top()>arr[i])
        {
            continue;
        }
        else
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

int main()
{
    int arr[]={5,15,10,20,8,25,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    k_largest(arr,n,3);
    
    return 0;
}