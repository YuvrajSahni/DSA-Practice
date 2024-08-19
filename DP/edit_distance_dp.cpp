#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int edit_dist(string s1, string s2, int m, int n){
    int dp[m+1][n+1];

    for(int i=0;i<=m;i++){
        dp[i][0]=i;
    }
    for(int j=0;j<=n;j++){
        dp[0][j]=j;
    }

    for(int i=1; i<=m; i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
            }
        }
    }
    return dp[m][n];
}
int main()
{
    //cout << "Starting program..." << endl;
    string s1 = "SATURDAY";
    string s2 = "SUNDAY";
    int m = s1.length();
    int n = s2.length();
    cout << "Minimum number of edits required: " << edit_dist(s1, s2, m, n) << endl;
}