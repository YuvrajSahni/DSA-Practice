#include <iostream>
using namespace std;

int repeat(int arr[], int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                return arr[i];
            }
        }
    }
    return -1;
}

int main()
{
    int x[]={0,2,1,3,2,2};
    cout<<repeat(x,6);
    
    return 0;
}