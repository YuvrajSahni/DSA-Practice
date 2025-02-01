#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <set>

using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());
        int maxi=0;
        int sum = 0;
        int start = 0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            while((sum>m || arr[i]-arr[start]>1) && start<i-1){
                sum -= arr[start];
                start++;
            }
            if(sum<=m){
                maxi=max(maxi,sum);
            }
        }
        cout<<maxi<<endl;
    }
}