#include <iostream>
using namespace std;

void freq(int arr[], int n)
{
    int freq=1;
    int i=1;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(n==1 || arr[n-1]!=arr[n-2])
    {
        cout<<arr[n-1]<<" "<<1;
    }
}
        
        
int main()
{
    int x[]={10,10,10,20,30,30};
    freq(x,6);
    return 0;
}