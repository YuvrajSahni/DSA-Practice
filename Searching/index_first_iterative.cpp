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

int main()
{
    int x[]={1,10,10,10,20,20,40};
    cout<<search_first(x,7,20);
    return 0;
}