#include <iostream>
using namespace std;

int sum_sub(int arr[], int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int temp=0;
        for(int j=i;j<n;j++)
        {
            temp+=arr[j];
            res=max(res,temp);
        }
    }
    return res;
}

int main()
{
    int x[]={2 , 3 , -8 , 7, -1 , 2 , 3 };
    cout<<sum_sub(x,7);
    return 0;
}