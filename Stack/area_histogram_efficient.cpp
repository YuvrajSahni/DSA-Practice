#include <iostream>
#include <stack>
using namespace std;

int histo(int arr[], int n)
{
    stack<int> s;
    int res=0;
    int tp;
    int curr;

    for(int i=0;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]>=arr[i])
        {
            tp=s.top();
            s.pop();
            curr=arr[tp]*(s.empty()?i:i-s.top()-1);
            res=max(res,curr);
        }
        s.push(i);
    }

    while(s.empty()==false)
    {
        tp=s.top();
        s.pop();
        curr=arr[tp]*(s.empty()?n:n-s.top()-1);
        res=max(res,curr);
    }
    return res;
}

int main()
{
    int x[]={6,2,5,4,1,5,6};
    cout<<histo(x,7);
    

    return 0;
}