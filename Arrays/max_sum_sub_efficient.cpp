#include <iostream>
using namespace std;


//kadane's algo

int sub(int arr[], int n)
{
    int res=arr[0];
    int max_end=arr[0];
    for(int i=1;i<n;i++)
    {
        max_end=max(max_end+arr[i],arr[i]);
        res=max(res,max_end);
    }
    return res;
}

int main()
{
    int x[]={-3,8,-2,4,-5,6};
    cout<<sub(x,6);    
    return 0;
}