#include <iostream>
using namespace std;

int count(int arr[], int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
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
    int x[]={0,0,0,1,1,1,1};
    cout<<count(x,7);
    
    return 0;
}