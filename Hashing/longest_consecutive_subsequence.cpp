#include <iostream>
#include <algorithm>

using namespace std;

int consecutive(int arr[], int n)
{
    sort(arr,arr+n);
    int count=1,res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1]+1)
        {
           count++;
        }
        else
        {
            res=max(res,count);
            count=1;
        }
    }
    res=max(res,count);
    return res;
}

int main()
{
    int x[]={1,9,3,4,2,10,13};
    cout<<consecutive(x,7);
    
    return 0;
}