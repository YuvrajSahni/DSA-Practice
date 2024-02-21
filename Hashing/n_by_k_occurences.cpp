#include <iostream>
#include <algorithm>

using namespace std;

void count(int arr[], int n, int k)
{
    sort(arr,arr+n);
    int i=1, count=1;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            count++;
            i++;
        }
        if(count>n/k)
        {
            cout<<arr[i-1]<<" ";
        }
        count=1;
        i++;
    }
}

int main()
{
    int arr[]={10,10,20,30,20,10,10};
    count(arr,7,2);
    
    return 0;
}