#include <iostream>
using namespace std;

int deletion(int arr[], int n, int x)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            break;
        }
    }
    if(i==n)
    {
        return n;
    }

    for(int j=i;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }

    return (n-1);
       
}

int main()
{
    int x[]={3,8,2,5,6};
    cout<<deletion(x,5,8);
    
    return 0;
}