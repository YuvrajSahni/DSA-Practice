#include <iostream>
using namespace std;

int large(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=0;j<n;j++)
        {                                                                                                     
            if(arr[j]>arr[i])
            {
                flag=false;
                break; 
            }
        }
        if(flag==true)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int x[]={5,6,9,4,3};
    cout<<large(x,5);
    
    return 0;
}