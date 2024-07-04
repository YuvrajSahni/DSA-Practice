#include <iostream>
using namespace std;

void greater_ele(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==n)
        {
            cout<<-1<<" ";
        }
    }
}

int main()
{
    int x[]={5,15,10,8,6,12,9,18};
    greater_ele(x,8);
    
    return 0;
}