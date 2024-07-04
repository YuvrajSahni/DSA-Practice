#include <iostream>
using namespace std;

int lomuto(int arr[], int l, int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<h;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    // for(int i=0;i<h;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    return i+1;
}

int k_smallest(int arr[], int n, int k)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int p = lomuto(arr,l,r);
        if(p==k-1)
        {
            return p;
        }
        else if(p>k-1)
        {
            r=p-1;
        }
        else
        {
            l=p+1;
        }
    }
    return -1;
}

int main()
{
    int x[]={10,4,5,8,11,6,26};
    cout<<k_smallest(x,7,5);
    
    return 0;
}