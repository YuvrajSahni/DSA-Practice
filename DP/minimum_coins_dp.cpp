#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_coins(int coins[], int n, int amount){
    int dp[amount+1];
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            dp[i]=INT_MAX;
        }
        for(int i=1;i<=amount;i++){
            for(int j=0;j<n;j++){
                if(coins[j]<=i){
                    int sub_res = dp[i-coins[j]];
                    if(sub_res!=INT_MAX){
                        dp[i]=min(dp[i],sub_res+1);
                    }
                }
            }
        }
        if(dp[amount]==INT_MAX){
            return -1;
        }
        return dp[amount];
}

int main()
{
    int arr[] = {1, 2, 5, 10, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = 34;
    cout << "Minimum coins required: " << min_coins(arr, n, val) << endl;
    return 0;
}