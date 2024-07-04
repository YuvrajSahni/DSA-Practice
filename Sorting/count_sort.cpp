#include <iostream>
using namespace std;

void count(int arr[], int n, int k)
{
    int count[k];
    for(int i=0;i<k;i++)
    {   
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0; j<count[i];j++)
        {
            arr[index]=i;
            index++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int x[]={1,4,4,1,0,1};
    count(x,6,5);
    
    return 0;
}