#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int egg(int f, int e){
    int dp[f+1][e+1];
    for(int i=1;i<=e;i++){
        dp[0][i]=0;
        dp[1][i]=1;
    }
    for(int j=1;j<=f;j++){
        dp[j][1]=j;
    }
    for(int i=2;i<=f;i++){
        for(int j=2;j<=e;j++){
            dp[i][j]=INT_MAX;
            for(int x=1;x<=i;x++){
                dp[i][j]=min(dp[i][j],1+max(dp[x-1][j-1],dp[i-x][j]));
            }
        }
    }
    return dp[f][e];
}

int main()
{
    int f, e;
    cout << "Enter the number of floors: ";
    cin >> f;
    cout << "Enter the number of eggs: ";
    cin >> e;
    int result = egg(f, e);
    cout << "Minimum number of trials needed: " << result << endl;
    return 0;
}