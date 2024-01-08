#include <iostream>
#include <algorithm>

using namespace std;

int guest(int arr[], int dep[], int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1, j=0, res=1, curr=1;
    while(i<n && j<n)
    {
        if(arr[i]<dep[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        res=max(res,curr);
    }
    return res;
}

int main()
{
    int arr[]={900,600,700};
    int dep[]={730,800,1000};
    cout<<guest(arr,dep,3);
    
    return 0;
}