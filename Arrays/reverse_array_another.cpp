#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int low=0; 
    int high=n-1;
    while(low<high)
    {
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int x[]={30,7,6,5,10};
    reverse(x,5);
    
    return 0;
}