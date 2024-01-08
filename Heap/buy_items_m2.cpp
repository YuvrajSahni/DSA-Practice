#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int buy(int arr[], int n, int sum)
{
    priority_queue<int,vector<int>,greater<int>> pq;
    int res=0;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(pq.top()<=sum)
        {
            sum-=pq.top();
            pq.pop();
            res++;
        }
        else
        {
            break;
        }
    }
    return res;
}

int main()
{
    int arr[]={1,12,5,111,200};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<buy(arr,n,10);    
    return 0;
}