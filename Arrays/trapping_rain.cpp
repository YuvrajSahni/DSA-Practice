#include <iostream>
using namespace std;

int trap(int arr[], int n)
{
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        int l_max = arr[i];
        for(int j=0;j<i;j++)
        {
            l_max=max(l_max,arr[j]);
        }
        int r_max=arr[i];
        for(int j=i+1;j<n;j++)
        {
            r_max=max(r_max,arr[j]);
        }
        res+=min(l_max,r_max)-arr[i];
    }
    return res;
}

int main()
{
    int x[]={5,0,6,2,3};
    cout<<trap(x,5);
    return 0;
}