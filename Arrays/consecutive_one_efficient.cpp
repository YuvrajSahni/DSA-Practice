#include <iostream>
using namespace std;

int one(int arr[], int n)
{
    int res=0;
    int max_int=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            res=0;
            continue;
        }
        
        else if(arr[i]==1)
        {
            res++;
        }
        max_int=max(max_int,res);
    }
    return max_int;
}

int main()
{
    int x[]={0,1,1,0,1,1,1};
    cout<<one(x,7);
    
    return 0;
}