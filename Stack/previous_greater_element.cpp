#include <iostream>
using namespace std;

void greater_ele(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[i])
            {
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1)
        {
            cout<<-1<<" ";
        }
    }
}

int main()
{
    int x[]={15,10,18,12,4,6,2,8};
    greater_ele(x,8);
    return 0;
}