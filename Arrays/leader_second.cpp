#include <iostream>
using namespace std;

void leaders(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<arr[i]<<" ";
        }
    }
}

int main()
{
    int x[]={7,10,4,3,7,5,6};
    leaders(x,7);
    
    return 0;
}