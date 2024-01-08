#include <iostream>
using namespace std;

bool sub_sum(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==x)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int x[]={5,8,6,13,3,-1};
    cout<<sub_sum(x,6,22);
    
    return 0;
}