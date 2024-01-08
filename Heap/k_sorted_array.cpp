#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void k_sort(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<=k;i++)
    {
        pq.push(arr[i]);
    }
    int index=0;
    for(int i=k+1;i<n;i++)
    {
        arr[index++]=pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while(pq.empty()==false)
    {
        arr[index++]=pq.top();
        pq.pop();
    }
}

void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={9,8,7,19,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    k_sort(arr,n,2);
    display(arr,n);
    return 0;
}