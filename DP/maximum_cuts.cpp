#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cuts(int n, int a, int b, int c){
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=-1;
        if(i-a>=0) dp[i]=max(dp[i],dp[i-a]);
        if(i-b>=0) dp[i]=max(dp[i],dp[i-b]);
        if(i-c>=0) dp[i]=max(dp[i],dp[i-c]);
        if(dp[i]!=-1) dp[i]++;
    }
    return dp[n];
}

int main()
{
    int n = 5;
    int a = 2, b = 3, c = 4;
    cout << "Maximum number of cuts needed: " << cuts(n, a, b, c) << endl;
    return 0;
}