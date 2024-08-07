#include <iostream>
using namespace std;

bool feasible(int arr[], int n, int k, int ans)
{
    int req=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]>ans)
        {
            req++;
            sum=arr[i];
        }
        else
        {
            sum+=arr[i];
        }
    }
    return (req<=k);
}

int page(int arr[], int n, int k)
{
    int sum=0;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }
    int low=mx;
    int high=sum;
    int res=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(feasible(arr,n,k,mid))
        {
            res=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return res;
}

int main()
{
    int x[]={10,20,30,40};
    cout<<page(x,4,2);
    
    return 0;
}