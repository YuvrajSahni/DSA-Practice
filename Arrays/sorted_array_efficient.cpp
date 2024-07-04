#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int x[]={2,5,12,11,23};
    cout<<sorted(x,5);
    
    return 0;
}