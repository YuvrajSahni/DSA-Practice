#include <iostream>
using namespace std;

void bubble(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}


int main()
{
    int x[]={10,8,20,5};
    bubble(x,4);
    
    return 0;
}