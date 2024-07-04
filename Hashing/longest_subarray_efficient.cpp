#include <iostream>
#include <unordered_map>
using namespace std;

int long_sub(int arr[], int n, int x)
{
    unordered_map <int,int> m;
    int pre_sum=0, res=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(pre_sum==x)
        {
            res=i+1;
        }
        if(m.find(pre_sum)==m.end());
        {
            m.insert({pre_sum,i});
        }
        if(m.find(pre_sum-x)!=m.end());
        {
            res=max(res,i-m[pre_sum-x]);
        }
    }
    return res;
}

int main()
{
    int x[]={8,3,1,5,-6,6,2,2};
    cout<<long_sub(x,8,4);
    
    return 0;
}