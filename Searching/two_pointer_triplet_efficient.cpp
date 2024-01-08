#include <iostream>
using namespace std;

bool two(int arr[], int left, int right, int x)
{
    int n = sizeof(arr)/sizeof(arr[0]);
    left=0;
    right=n-1;
    while(left<right)
    {
        if(arr[left]+arr[right]==x)
        {
            return true;
        }
        else if(arr[left]+arr[right]>=x)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return false;
}

bool triplet(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(two(arr,i+1,n-1,x-arr[i]))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int x[]={2,3,4,8,9,20,40};
    cout<<triplet(x,7,32);
    
    return 0;
}