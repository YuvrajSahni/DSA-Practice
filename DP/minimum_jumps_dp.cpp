#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_jumps(int arr[], int n){
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++){
        dp[i]=INT_MAX;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]+j>=i){
                if(dp[j]!=INT_MAX){
                    dp[i]=min(dp[i],dp[j]+1);
                }
            } 
        }
    }
    return dp[n-1];
}

int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of jumps to reach the end: " << min_jumps(arr, n) << endl;
    return 0;
}