#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int summation(int arr[], int i, int j){
    int sum = 0;
    for(int x = i;x<=j;x++){
        sum+=arr[x];
    }
    return sum;
}

int minPages(int arr[], int n, int k){
    if(k==1){
        return summation(arr,0,n-1);
    }
    if(n==1){
        return arr[0];
    }
    int res = INT_MAX;
    for(int i=1;i<n;i++){
        res = min(res, max(minPages(arr,i,k-1),summation(arr,i,n-1)));
    }
    return res;
}

int main()
{
    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout << "Minimum number of pages: " << minPages(arr, n, k)<<endl;
    return 0;
}