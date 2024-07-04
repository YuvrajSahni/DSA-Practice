#include <iostream>
using namespace std;

int dup(int arr[], int n)
{
    int res=1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return res;
}

int main()
{
    int x[]={10,20,20,30,30,30};
    cout<<dup(x,6);
    return 0;
}