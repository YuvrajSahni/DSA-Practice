#include <iostream>
using namespace std;

void stock_span(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int span=1;
        for(int j=i-1;j>=0 && arr[j]<=arr[i]; j--)
        {
            span++;
        }
        cout<<span<<" ";
    }
}

int main()
{
    int arr[]={13,15,12,14,16,8,6,4,10,30};
    stock_span(arr,10);
    return 0;
}