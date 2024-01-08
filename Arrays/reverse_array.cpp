#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    } 
}

int main()
{
    int x[]={10,5,7,30};
    reverse(x,4);
    return 0;
}