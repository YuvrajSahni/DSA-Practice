#include <iostream>
using namespace std;

int search_first(int arr[], int low, int high, int x)
{
    int mid=(low+high)/2;
    if(low>high)
    {
        return -1;
    }
    if(arr[mid]>x)
    {
        return search_first(arr,low,mid-1,x);
    }
    else if(arr[mid]<x)
    {
        return search_first(arr,mid+1,high,x);
    }
    else
    {
        if(mid==0||arr[mid-1]!=arr[mid])
        {
            return mid;
        }
        else
        {
            return search_first(arr,low,mid-1,x);
        }
    }
    
}

int main()
{
    int x[]={1,10,10,10,20,20,40};
    cout<<search_first(x,0,6,20);
    return 0;
}