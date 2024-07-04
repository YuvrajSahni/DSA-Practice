#include <iostream>
using namespace std;

void leader(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout<<arr[i]<<" ";
            
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                break;
            }
            else if(arr[i]>arr[j])
            {
                
                if(j==n-1)
                {
                    cout<<arr[i]<<" ";
                }
                continue;
            }    
        }
        
    }
}

int main()
{
    int x[]={7,10,4,3,7,5,6};
    leader(x,7);
    
    return 0;
}