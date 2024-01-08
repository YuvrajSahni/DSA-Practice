#include <iostream>
using namespace std;

void ceil(int arr[], int n)
{
    cout<<-1<<" ";
    for(int i=1;i<n;i++)
    {
        int diff=INT16_MAX;
        for(int j=0;j<i;j++)
        {
            if(arr[j]>=arr[i])
            {
                diff=min(diff,arr[j]-arr[i]);
            }
        }
        if(diff==INT16_MAX)
        {
            cout<<-1<<" ";
        }
        else
        {
            cout<<arr[i]+diff<<" ";
        }
    }
}

int main()
{
    int x[]={2,8,30,15,25,12};
    int n=sizeof(x)/sizeof(x[0]);
    ceil(x,n);
    return 0;
}