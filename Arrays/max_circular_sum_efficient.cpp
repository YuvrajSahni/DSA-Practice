#include <iostream>
using namespace std;

int sub(int arr[], int n)
{
    int res=arr[0];
    int max_end=arr[0];
    for(int i=1;i<n;i++)
    {
        max_end=max(max_end+arr[i],arr[i]);
        res=max(res,max_end);
    }
    return res;
}

int circular(int arr[], int n)
{
    int max_normal=sub(arr,n);
    if(max_normal<0)
    {
        return max_normal;
    }
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int max_circular=arr_sum+sub(arr,n);
    return max(max_circular,max_normal);
}

int main()
{
    int x[]={8,-4,3,-5,4};
    cout<<circular(x,5);
    
    return 0;
}