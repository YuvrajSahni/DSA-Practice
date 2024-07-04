#include <iostream>
#include <algorithm>
using namespace std;

int repeat(int arr[], int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int x[]={0,2,1,3,2,2};
    cout<<repeat(x,6);
    
    return 0;
}