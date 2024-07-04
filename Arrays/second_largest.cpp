#include <iostream>
using namespace std;

int largest(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[res])
        {
            res=i;
        }
    }
    return res;
}

int second_largest(int arr[], int n)
{
    int large = largest(arr,n);
    int temp=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[large])
        {
            if(temp==-1)
            {
                temp=i;
            }
            else if(arr[i]>arr[temp])
            {
                temp=i;
            }
        }

    }
    return temp;
}

int main()
{
    int x[]={6,4,9,10,8};
    cout<<second_largest(x,5);
    
    return 0;
}