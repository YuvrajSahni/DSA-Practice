#include <iostream>
using namespace std;

int one(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int temp=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==1)
            {
                temp++;
            }
            else
            {
                break;
            }
        }
        res=max(res,temp);
    }
    return res;
}

int main()
{
    int x[]={0,1,1,0,1,1,1};
    cout<<one(x,7);
    return 0;
}