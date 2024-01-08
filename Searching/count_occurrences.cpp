#include <iostream>
using namespace std;

int count(int arr[], int n, int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            count++;
        }
        else
        continue;
    }
    return count;
}

int main()
{
    int x[]={10,20,20,20,30,30};
    cout<<count(x,6,20);
    
    return 0;
}