#include <iostream>
using namespace std;

int majority(int arr[], int n)
{
    
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>n/2)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int x[]={3,8,4,8,8};
    cout<<majority(x,5);
    
    return 0;
}