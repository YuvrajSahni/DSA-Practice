#include <iostream>
using namespace std;

void neg(int arr[], int n)
{
    int temp[n];
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<0)
        {
            temp[i]=arr[j];
            i++;
        }
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]>=0)
        {
            temp[i]=arr[j];
            i++;
        }
    }
    for(int j=0;j<n;j++)
    {
        arr[j]=temp[j];
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}

int main()
{
    int x[]={15,-3,-2,18};
    neg(x,4);
    
    return 0;
}