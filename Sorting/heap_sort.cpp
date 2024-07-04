#include <iostream>
using namespace std;

void maxheapify(int arr[], int n, int i)
{
    int largest=i, left=2*i+1, right=2*i+2;
    if(left<n && arr[left]>arr[largest])
    {
        largest=left;
    }
    if(right<n && arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        maxheapify(arr,n,largest);
    }
}

void buildheap(int arr[], int n)
{
    for(int i=(n-2)/2; i>=0; i--)
    {
        maxheapify(arr,n,i);
    }
}

void heapsort(int arr[], int n)
{
    buildheap(arr,n);
    for(int i=n-1;i>=1;i--)
    {
        swap(arr[0],arr[i]);
        maxheapify(arr,i,0);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int x[] = {10,15,50,4,20};
    heapsort(x,5);
    return 0;
}