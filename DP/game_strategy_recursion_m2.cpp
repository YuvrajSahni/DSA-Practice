#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sol(int arr[], int i, int j){
    if(i+1==j){
        return max(arr[i],arr[j]);
    }

    else{
        return max(arr[i]+min(sol(arr,i+1,j-1),sol(arr,i+2,j)), arr[j]+min(sol(arr,i+1,j-1),sol(arr,i,j-2)));
    }
}

int main()
{
    int arr[] = {20,5,4,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sol(arr, 0, n-1)<<endl;
    return 0;
}