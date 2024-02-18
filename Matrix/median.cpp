#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

const int R=3;
const int C=5;

int median(int arr[][INT32_MAX])
{
    int mini=arr[0][0];
    int maxi=arr[0][C-1];
    for(int i=1;i<R;i++)
    {
        if(arr[i][0]<mini)
        {
            mini=arr[i][0];
        }
        if(arr[i][C-1]>maxi)
        {
            maxi=arr[i][C-1];
        }
    }
    int med_pos=(R*C+1)/2;
    while(mini<maxi)
    {
        int mid = (mini+maxi)/2;
        int mid_pos=0;
        for(int i=0;i<R;i++)
        {
            //mid_pos+=max(arr[i],mid) - arr[i];
        }
        if(mid_pos<med_pos)
        {
           mini=mid+1;
       }
        else
        {
        maxi=mid;
        }
    }
    return mini;
}

int main()
{
    cout<<"HELLO";
    return 0;
}
