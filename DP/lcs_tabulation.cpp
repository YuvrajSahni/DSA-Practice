#include <iostream>
using namespace std;

int lcs(string s1,string s2, int n, int m){
    int arr[n+1][m+1];
    for(int i=0;i<=m;i++){
        arr[0][i]=0;
    }
    for(int j=0;j<=n;j++){
        arr[j][0]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                arr[i][j]=arr[i-1][j-1]+1;
            }
            else{
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }
    return arr[n][m];
}

int main(){
    string s1, s2;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    int n=s1.length();
    int m=s2.length();
    int lcs_length=lcs(s1, s2, n, m);
    cout<<"Length of Longest Common Subsequence: "<<lcs_length<<endl;
    return 0;
}