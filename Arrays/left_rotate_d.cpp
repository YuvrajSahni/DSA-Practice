#include <iostream>
using namespace std;

void one(int arr[], int n)
{
    int temp=arr[0];
    for(int i=1; i<n; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void d(int arr[], int n, int d)
{
    for(int i=0; i<d; i++)
    {
        one(arr,n);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int x[]={1,2,3,4,5};
    d(x,5,2);
    return 0;
}