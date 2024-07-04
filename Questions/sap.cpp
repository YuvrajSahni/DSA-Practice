// You are using GCC
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int len, k, x;
    cin>>len>>k>>x;
    vector<int> arr(len);
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    for(int i=0;i<len;i++){
        arr[i]=abs(x-arr[i]);
    }
    sort(arr.begin(),arr.end());
    int sum=0;
    for(int i=len-1;i>=len-k;i--){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}