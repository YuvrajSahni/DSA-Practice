#include <iostream>
using namespace std;

int coin(int coins[], int n, int sum){
    int dp[sum+1][n+1];
    for(int i = 0; i <= n; i++){
        dp[0][i] = 1;
    }
    for(int i = 1; i <= sum; i++){
        dp[i][0] = 0;
    }
    for(int i = 1; i <= sum; i++){
        for(int j = 1; j <= n; j++){
            dp[i][j] = dp[i][j-1];
            if(coins[j-1] <= i){
                dp[i][j] += dp[i-coins[j-1]][j];
            }
        }
    }
    return dp[sum][n];
}

int main(){
    int coins[] = {2,5,3,6};
    int n = sizeof(coins)/sizeof(coins[0]);
    int sum = 10;

    cout << "Number of ways to make change for " << sum << " is: " << coin(coins, n, sum) << endl;

    return 0;
}