#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count(int arr[], int n, int sum){
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
    for(int j=1;j<=sum;j++){
        dp[0][j]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(j<arr[i-1]){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }
        }
    }
    return dp[n][sum];
}

int main()
{
    int arr[] = {2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 5;
    cout << "Number of ways to get sum " << sum << " is " << count(arr, n, sum) << endl;
    return 0;
}