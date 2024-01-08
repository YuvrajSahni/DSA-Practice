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
    
    return i+1;
}

void q_sort(int arr[], int l, int h)
{
    if(l<h)
    {
        int p=lomuto(arr,l,h);
        q_sort(arr,l,p-1);
        q_sort(arr,p+1,h);
    }
    // for(int i=0;i<h;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}

int main()
{
    int x[]={8,4,7,9,3,10,5};
    q_sort(x,0,6);

    return 0;
}