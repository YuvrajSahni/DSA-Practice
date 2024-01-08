#include <iostream>
using namespace std;

int search_last(int arr[], int low, int high, int x)
{
    int mid=(low+high)/2;
    if(low>high)
    {
        return -1;
    }
    if(arr[mid]>x)
    {
        return search_last(arr,low,mid-1,x);
    }
    else if(arr[mid]<x)
    {
        return search_last(arr,mid+1,high,x);
    }
    else
    {
        if(mid==x-1||arr[mid+1]!=arr[mid])
        {
            return mid;
        }
        else
        {
            return search_last(arr,mid+1,high,x);
        }
    }
    
}

int main()
{
    int x[]={5,10,10,10,10,20,20};
    cout<<search_last(x,0,6,10);
    return 0;
}