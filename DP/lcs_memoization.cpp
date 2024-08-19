#include <iostream>
#include <vector>
using namespace std;

int arr[1000][1000];

int lcs(string s1, string s2, int n, int m){
    if(n == 0 || m == 0)
        return 0;

    if(arr[n-1][m-1]!= -1)
        return arr[n][m];

    else{
        if(s1[n-1] == s2[m-1])
            arr[n][m] = lcs(s1, s2, n-1, m-1) + 1;
        else
            arr[n][m] = max(lcs(s1, s2, n-1, m), lcs(s1, s2, n, m-1));

    }
    return arr[n][m];
}

int main(){
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    int n = s1.length();
    int m = s2.length();

    memset(arr,-1,sizeof(arr));

    cout << "Length of LCS: " << lcs(s1, s2, n, m) << endl;

    return 0;
}