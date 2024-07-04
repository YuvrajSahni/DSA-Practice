#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n,p;
    cin>>n>>p;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string res="no";
    int count1=0, count2=0;
    sort(arr.begin(),arr.end());
    if(n%3!=0){
        res = "no";
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]<=p/10){
                count1++;
            }
            else if(arr[i]>=p/2){
                count2++;
            }
            else{
                count1=0;
                count2=0;
                break;
            }
        }
        if(count1 == (n*2)/3 && count2==n-count1){
            res = "yes";
        }
    }
    cout<<res<<endl;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}
