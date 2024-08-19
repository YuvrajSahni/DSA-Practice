#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int msis(int arr[], int n){
    int ms[n];
    for(int i=0;i<n;i++){
        ms[i]=arr[i];
        for(int j=0;j<i;j++){
            if(arr[i] > arr[j]){
                ms[i] = max(ms[i],ms[j] + arr[i]);
            }
        }
    }
    int res = ms[0];
    for(int i=1;i<n;i++){
        res = max(res,ms[i]);
    }
    return res;
}

int main()
{
    int arr[] = { 1, 101, 2, 3, 100, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum sum of increasing subsequence is " << msis(arr, n)<<endl;
    return 0;
}