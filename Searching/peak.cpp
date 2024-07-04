#include <iostream>
using namespace std;

int peak(int arr[], int n)
{
    if(n==1)
    {
        cout<<arr[0];
    }
    if(arr[0]>=arr[1])
        {
           cout<<arr[0]<<endl; 
        }
    for(int i=1;i<n;i++)
    {
        int temp=0;
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
        {
            temp=arr[i];
            cout<<temp<<endl;
        }
                
    }

    return 0;
}

int main()
{
    int x[]={10,20,15,5,23,90,97};
    peak(x,7);
    
    return 0;
}