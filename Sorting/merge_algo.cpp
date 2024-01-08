#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1];
    int right[n2];
    for(int i=0; i<n1; i++)
    {
        left[i]=arr[low+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[n1+i];
    }
    int i=0, j=0, k=0;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
    // for(int i=0;i<high;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}

void merge_algo(int arr[], int l, int r)
{
    if(r>l)
    {
        int m = l + (r-l)/2;
        merge_algo(arr,l,m);
        merge_algo(arr,m+1,r);
        merge(arr,l,m,r);
    }
    
}

int main()
{
    int x[]={10,5,30,15,7};
    merge_algo(x,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}