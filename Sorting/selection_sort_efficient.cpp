#include <iostream>
using namespace std;

void selection(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
        }
        swap(arr[min_ind],arr[i]);
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}

int main()
{
    int x[]={10,5,8,20,2,18};
    selection(x,6);
    
    return 0;
}