#include <iostream>
using namespace std;

void count(int arr[], int n, int exp)
{
    int count[10], output[n];
    for(int i=0;i<10;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[(arr[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        output[count[(arr[i]/exp)%10] - 1] = arr[i];
        count[(arr[i]/exp)%10]--;

    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
}

void radix_sort(int arr[], int n)
{
    int mx = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
    }
    
    // {
    //     for(int exp=1;mx/exp>20,exp=exp*10)
    //     {
    //         count(arr,n,exp);
    //     }
    // }
}

int main()
{
    int x[]={319,212,6,8,50};
    radix_sort(x,5);
    
    return 0;
}