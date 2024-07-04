#include <iostream>
using namespace std;

int search(int arr[], int n, int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int x[]={5,15,25};
    cout<<search(x,3,25);
    
    return 0;
}