#include <iostream>
using namespace std;

bool window(int arr[], int n, int k)
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[i];
        }
        if(sum==k)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int x[]={1,4,20,3,10,5};
    cout<<window(x,6,33);
    
    return 0;
}