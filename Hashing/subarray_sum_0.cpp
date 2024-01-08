#include <iostream>
using namespace std;

bool sub_sum(int arr[], int n)
{
    
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==0)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int x[]={1,4,13,-3,-10,5};
    cout<<sub_sum(x,6);
    
    return 0;
}