#include <iostream>
using namespace std;

void sub(int arr[], int n, int k)
{
    for(int i=0;i<n-k+1;i++)
    {
        int mx=arr[i];
        for(int j=i+1;j<i+k;j++)
        {
            mx=max(arr[j],mx);
        }
        cout<<mx<<" ";
    }    
}

int main()
{
    int x[]={10,8,5,12,15,7,6};
    sub(x,7,3);
    
    return 0;
}