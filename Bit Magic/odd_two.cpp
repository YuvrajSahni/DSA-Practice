#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<x;i++)
    {
        int count=0;
        for(int j=0; j<x;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count%2 !=0)
        {
            cout<<arr[i];
        }
    }   

    return 0;
}