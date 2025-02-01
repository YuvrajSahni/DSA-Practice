#include <iostream>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;

    while(t--){
        cin>>n>>k;
        if(k<n){
            cout<<0;
            continue;
        }
        int sum = n;
        if(sum>=k){
            cout<<1;
            continue;
        }
        int count=1;
        while(sum<k){
            sum+= (n-1);
            count++;
            if(sum>=k){
                break;
            }
            sum+=(n-1);
            count++;
            n--;
        }
        cout<<count<<endl;
    }
    return 0;
}