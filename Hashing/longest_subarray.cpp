#include <iostream>
using namespace std;

int long_sub(int arr[], int n, int x)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;        
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==x)
            {
                res=max(res,j-i+1);
            }
        }
    }

    return res;
}

int main()
{
    int x[]={5,8,-4,-4,9,-2,2};
    cout<<long_sub(x,7,0);
    
    return 0;
}