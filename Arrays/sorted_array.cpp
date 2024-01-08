#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int x[]={8,11,12,20};
    sorted(x,4)?cout<<true:cout<<false;
    return 0;
}