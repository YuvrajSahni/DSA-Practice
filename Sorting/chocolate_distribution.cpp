#include <iostream>
#include <algorithm>

using namespace std;

int chocolate(int arr[], int n, int m)
{
    if(m>n)
    {
        return -1;
    }
    sort(arr,arr+n);
    int res=arr[m-1]-arr[0];
    for(int i=1;i+m-1<n;i++)
    {
        res=min(res,(arr[i+m-1]-arr[i]));
    }
    return res;
}

int main()
{
    int x[]={7,3,2,4,9,12,56};
    cout<<chocolate(x,7,3);
    return 0;
}