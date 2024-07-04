#include <iostream>
using namespace std;

int rotate(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int x[]={100,200,400,1000,10,20};
    cout<<rotate(x,1000);
    
    return 0;
}