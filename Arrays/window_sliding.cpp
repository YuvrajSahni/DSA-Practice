#include <iostream>
using namespace std;

int window(int arr[], int n, int k)
{
    int max_sum=INT16_MIN;
    for(int i=0;i+k-1<n;i++)
    {
        int sum=0;
        for(int j=0;j<k;j++)
        {
            sum+=arr[i+j];
        }
        max_sum=max(sum,max_sum);
    }
    return max_sum;
}

int main()
{
    int x[]={1,8,30,-5,20,7};
    cout<<window(x,6,3);
    
    return 0;
}