#include <iostream>
using namespace std;

void count(int arr[], int n, int k)
{
    int count[k];
    for(int i=0;i<k;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<k;i++)
    {
        count[i]=count[i-1]+count[i];
    }
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;

    }

    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int x[]={5,6,5,2};
    count(x,4,7);
    
    return 0;
}