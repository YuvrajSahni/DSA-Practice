#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        return i;
    }
    return -1;
}

int main()
{
    int x[]= {2,3,4};
    cout<<search(x,3,3);

    return 0;
}