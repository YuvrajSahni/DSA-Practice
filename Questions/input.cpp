// You are using GCC
#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    
    stringstream ss(str);
    
    int num;
    vector<int> arr;
    int i=0;
    while(ss>>num){
        arr.push_back(num);
        cout<<arr[i]<<"->";
        i++;
    }
    cout<<endl;
    
    int n=arr.size();
    vector<int> ans(n);
    ans[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        ans[i]=arr[i+1]*ans[i+1];
    }
    int leftprod=1;
    for(int i=0;i<n;i++)
    {
        ans[i]=leftprod*ans[i];
        leftprod=leftprod*arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
    
}

//Taking input as a string with spaces.