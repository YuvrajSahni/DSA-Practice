#include <iostream>
#include <algorithm>

using namespace std;

int min_diff(int arr[], int n)
{
    sort(arr,arr+n);
    int count = INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        count=min(count,arr[i+1]-arr[i]);
    }
    return count;
}

int main()
{
    int x[]={10,3,20,12};
    cout<<min_diff(x,4);
    
    return 0;
}