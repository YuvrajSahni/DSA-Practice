#include <iostream>
using namespace std;

int diff(int arr[], int n)
{
    int res=arr[1]-arr[0];
    int min_value=arr[0];
    for(int i=1; i<n; i++)
    {
        res = max(res,arr[i]-min_value);
        min_value=min(min_value,arr[i]);
    }
    return res;
}

int main()
{
    int x[]={2,3,10,6,4,8,1};
    cout<<diff(x,7);
    return 0;
}