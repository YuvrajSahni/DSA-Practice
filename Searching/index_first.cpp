#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int x[]={1,10,10,10,20,20,40};
    cout<<search(x,7,20);
    
    return 0;
}