#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void rotate(int arr[], int n, int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n, x[n], k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    cout<<"Enter the number of rotations: ";
    cin>>k;
    
    cout<<"The rotated array is: ";
    rotate(x,n,k);
    
    return 0;
}