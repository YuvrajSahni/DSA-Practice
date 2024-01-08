#include <iostream>
using namespace std;

void selection(int arr[], int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        int min_ind=0;
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
        }
        temp[i]=arr[min_ind];
        arr[min_ind]=INT32_MAX;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int x[]={10,5,8,20,2,18};
    selection(x,6);
    
    return 0;
}