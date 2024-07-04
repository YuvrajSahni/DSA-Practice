#include <iostream>
using namespace std;

int dif(int arr[], int n)
{
    int max_diff= arr[1]-arr[0];
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
           max_diff= max(max_diff,arr[j]-arr[i]);
        }
    }
    return max_diff;
}

int main()
{
    int x[]={2,3,10,6,4,8,1};
    cout<<dif(x,7);
    
    return 0;
}