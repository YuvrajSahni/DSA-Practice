#include <iostream>
using namespace std;

int min_diff(int arr[], int n)
{
    int count = INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            count=min(count,abs(arr[j]-arr[i]));
        }
    }
    return count;
}

int main()
{
    int x[]={19,8,12,6,18};
    cout<<min_diff(x,5);
    
    return 0;
}