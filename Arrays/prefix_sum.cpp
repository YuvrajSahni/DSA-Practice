#include <iostream>
using namespace std;

int pre_sum(int arr[], int a, int b)
{
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int x[]={2,8,3,9,6,5,4};
    cout<<pre_sum(x,0,2);
    
    return 0;
}