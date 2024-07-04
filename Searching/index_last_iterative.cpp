#include <iostream>
using namespace std;

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

int main()
{
    int x[]={5,10,10,10,10,20,20};
    cout<<search_last(x,7,10);
    return 0;
}