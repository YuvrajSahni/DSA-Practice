#include <iostream>
#include <algorithm>
using namespace std;

void k_largest(int arr[], int n, int k)
{
    sort(arr,arr+n);
    for(int i=n-1;i>=n-k;i--)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={5,15,10,20,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    k_largest(arr,n,2);
    
    return 0;
}