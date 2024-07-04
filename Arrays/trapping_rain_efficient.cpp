#include <iostream>
using namespace std;

int trap(int arr[], int n)
{
    int res=0;
    int l_max[n];
    int r_max[n];
    l_max[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        l_max[i]=max(arr[i],l_max[i-1]);
    }
    r_max[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        r_max[i]=max(arr[i],r_max[i+1]);
    }
    for(int i=1;i<n-1;i++)
    {
        res+= (min(l_max[i],r_max[i])-arr[i]);
    }
    return res;
}

int main()
{
    int x[]={5,0,6,2,3};
    cout<<trap(x,5);
    
    return 0;
}