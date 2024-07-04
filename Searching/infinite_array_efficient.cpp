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

int infinite(int arr[], int n)
{
    if(arr[0]==n)
    {
        return 0;
    }
    int i=1;
    while(arr[i]<n)
    {
        i=i*2;
    }
    if(arr[i]==n)
    {
        return i;
    }
    return search(arr,i/2+1,i-1,n);
    
}

int main()
{
    int x[]={1,10,15,20,40,60,80,100,200,500,1000};
    cout<<infinite(x,60);
    return 0;
}