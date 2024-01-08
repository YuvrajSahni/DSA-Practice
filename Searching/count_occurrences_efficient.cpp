#include <iostream>
using namespace std;

int search_first(int arr[], int n, int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
    {
        if(mid==0||arr[mid-1]!=arr[mid])
        {
            return mid;
        }
        else
        {
            high=mid-1;
        }
    }
    }
    return -1;
}


int search_last(int arr[], int n, int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            if(mid==n-1||arr[mid]!=arr[mid+1])
            {
                return mid;
            }
            else
            {
                low=mid+1;
            }
        }
    }
    return -1;
}

int count(int arr[], int n, int x)
{
    int first=search_first(arr,n,x);
    if(first==-1)
    {
        return 0;
    }
    else
    {
        return (search_last(arr,n,x)-first+1);
    }
}

int main()
{
    int x[]={5,10,10,10,20,20,20};
    cout<<count(x,7,10);
    return 0;
}