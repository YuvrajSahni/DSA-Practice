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
    int dp[k+1][n+1];
    for(int i=1;i<=n;i++){
        dp[1][i]=summation(arr,0,i-1);
    }
    for(int i=1;i<=k;i++){
        dp[i][1]=arr[0];
    }
    for(int i=2;i<=k;i++){
        for(int j=2;j<=n;j++){
            dp[i][j]=INT_MAX;
            for(int p=1;p<j;p++){
                dp[i][j]=min(dp[i][j],max(dp[i-1][p],summation(arr,p,j-1)));
            }
        }
    }
    return dp[k][n];
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout << "Minimum number of pages: " << minPages(arr, n, k) << endl;
    return 0;
}