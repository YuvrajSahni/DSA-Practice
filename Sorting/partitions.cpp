#include <iostream>
using namespace std;

void partitions(int arr[], int l, int h, int p)
{
    int temp[h-l+1];
    int index=0;
    for(int i=l;i<=h;i++)
    {
        if(arr[i]<=arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++)
    {
        if(arr[i]>arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++)
    {
        arr[i]=temp[i-l];
    }
    for(int i=0;i<=h;i++)
    {
       cout<<arr[i]<<" ";
    }

}

int main()
{
    int x[]={5,13,6,9,12,11,8};
    partitions(x,0,6,6);
    
    return 0;
}