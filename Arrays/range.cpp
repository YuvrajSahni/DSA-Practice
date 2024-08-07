#include <iostream>
#include <vector>
using namespace std;

int max_occ(int L[], int R[], int n)
{
    int arr[1000];
    // memset(arr, 0, sizeof(arr));
    for(int i=0; i<n;i++)
    {
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int maxm=arr[0];
    int res=0;
    for(int i=1;i<1000;i++)
    {
        arr[i]+=arr[i-1];
        if(maxm<arr[i])
        {
            maxm=arr[i];
            res=i;
        }
    }
    return res;
}

int main()
{

    int L[] = {1, 2, 3}, R[] = {3, 5, 7}, n = 3;
    cout<<max_occ(L, R, n);
    return 0;
}