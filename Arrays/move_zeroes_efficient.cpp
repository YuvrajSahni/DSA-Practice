#include <iostream>
using namespace std;

void zero(int arr[], int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int x[]={10,8,0,0,12,0};
    zero(x,6);
    
    return 0;
}