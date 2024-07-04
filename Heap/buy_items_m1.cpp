#include <iostream>
#include <algorithm>
using namespace std;

int buy(int arr[], int n, int sum)
{
    sort(arr,arr+n);
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=sum)
        {
            sum-=arr[i];
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