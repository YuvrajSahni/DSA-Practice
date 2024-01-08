#include <iostream>
using namespace std;

int subsets(int arr[], int n, int sum)
{
    if(n==0)
    {
        return (sum==0) ? 1:0;
    }

    return subsets(arr , n-1, sum) + subsets(arr, n-1, sum-arr[n-1]);
}

int main()
{
    int x[]={10,15,20};
    cout<<subsets(x,3,25);
    
    return 0;
}