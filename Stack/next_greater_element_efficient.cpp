#include <bits/stdc++.h>
using namespace std;

vector<int> greater_ele(int arr[], int n)
{
    stack<int> s;
    vector<int> v;
    s.push(arr[n-1]);
    v.push_back(-1);
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && s.top()<=arr[i])
        {
            s.pop();
        }
        int pg=s.empty()?-1: s.top();
        v.push_back(pg);
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}

int main()
{
    int x[]={5,15,10,8,6,12,9,18};
    for(int x: greater_ele(x,8)){
        cout<<x<< " ";   
    }
    
    return 0;
}