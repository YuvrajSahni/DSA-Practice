#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool palindrome(string s, int start, int end){
    while(start<end){
        if(s[start]!= s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int pal(string s){
    int n = s.length();
    int dp[n][n];

    for(int i=0;i<n;i++){
        dp[i][i]=0;
    }

    for(int gap=1;gap<n;gap++){
        for(int i=0;i+gap<n;i++){
            int j= i+gap;
            if(palindrome(s, i, j)){
                dp[i][j]=0;
            }
            else{
                dp[i][j]=INT_MAX;
                for(int k=i;k<j;k++){
                    dp[i][j]=min(dp[i][j], 1+dp[i][k]+dp[k+1][j]);
                }
            }
        }
    }
    return dp[0][n-1];
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int palin_count = pal(str);
    cout << "Minimum number of insertions to make the string a palindrome: " << palin_count << endl;
    return 0;
}