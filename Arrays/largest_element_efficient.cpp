#include <iostream>
using namespace std;

int largest(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[res])
        {
            res=i;
        }
    }
    return res;
}

int main()
{
    int x[]={6,4,9,10,8};
    cout<<largest(x,5);
    
    return 0;
}