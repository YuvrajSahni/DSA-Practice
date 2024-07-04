#include <iostream>
using namespace std;

int search(int arr[], int low, int high, int x)
{
    int mid=(low+high)/2;
    if(low>high)
    {
        return -1;
    }
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        return search(arr,low,mid-1,x);
    }
    else
    {
        return search(arr,mid+1,high,x);
    }
    
}

int main()
{
    int x[]={10,20,30,40,50,60,70};
    cout<<search(x,0,6,40);
    return 0;
}