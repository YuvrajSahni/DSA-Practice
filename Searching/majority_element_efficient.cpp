#include <iostream>
using namespace std;

int majority(int arr[], int n)
{
    int res=0;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            count=1;
            res=i;
        }
    }

    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
        {
            count++;
        }
    }
    if(count<=n/2)
    {
        res=-1;
    }
    return res;
}

int main()
{
    int x[]={8,8,6,6,6,4,6};
    cout<<majority(x,7);
    
    return 0;
}