#include <iostream>
using namespace std;

bool window(int arr[], int n, int sum)
{
    int curr_sum=arr[0];
    int start=0;
    for(int end=1;end<n;end++)
    {
        while(curr_sum>sum && start<end-1)
        {
            curr_sum-=arr[start];
            start++;
        }
        if(curr_sum==sum)
        {
            return true;
        }
        if(end<n)
        {
            curr_sum+=arr[end];
        }
    }
    return(curr_sum==sum);
}

int main()
{
    int x[]={1,4,20,3,10,5};
    cout<<boolalpha<<window(x,6,10);
    
    return 0;
}