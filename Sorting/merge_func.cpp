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
    for(int i=0;i<=high;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int x[]={10,15,20,40,8,11,55};
    merge(x,0,3,6);

    return 0;
}