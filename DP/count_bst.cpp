#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count(int n){
    int dp[n+1];
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]=0;
        for(int j=0;j<i;j++){
            dp[i]+=dp[j]*dp[i-j-1];
        }
    }
    return dp[n];
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of ways to arrange " << n << " elements: " << count(n) << endl;
    return 0;
}