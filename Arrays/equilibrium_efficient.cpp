#include <iostream>
using namespace std;

bool eq(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int l_sum=0;
    for(int i=0;i<n;i++)
    {
        if(l_sum==sum-arr[i])
        {
            return true;
        }
        l_sum+=arr[i];
        sum-=arr[i];
    }
    return false;
}

int main()
{
    int x[]={3,4,8,-9,20,6};
    cout<<eq(x,6);
    
    return 0;
}