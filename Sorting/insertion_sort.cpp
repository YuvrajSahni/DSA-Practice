#include <iostream>
using namespace std;

void insertion(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]==arr[j];
            j--;
        }
        arr[j+1]=key;
        
    }
}

int main()
{
    int x[]={20,5,40,60,10,30};
    insertion(x,6);
    
    return 0;
}