#include <iostream>
using namespace std;

int rotate(int arr[], int n, int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        if(arr[low]<arr[mid])
        {
            if(x>=arr[low] && x<arr[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
            if(x>arr[mid] && x<=arr[high])
            {
                low=mid+1;
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
    int x[]={100,200,400,1000,10,20};
    cout<<rotate(x,6,1000);
    
    return 0;
}