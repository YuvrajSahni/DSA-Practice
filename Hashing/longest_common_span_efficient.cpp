#include <iostream>
#include <unordered_map>

using namespace std;

int span(bool arr1[], bool arr2[], int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=arr1[i]-arr2[i];
    }

    unordered_map<int,int> m;
    int pre_sum=0, res=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(pre_sum==0)
        {
            res=i+1;
        }
        if(m.find(pre_sum)!=m.end())
        {
            res=max(res,i-m[pre_sum]);
        }
        else
        {
            m[pre_sum]=i;
        }
    }
    return res;
}

int main()
{
    bool x[]={0,1,0,0,0,0};
    bool y[]={1,0,1,0,0,1};
    cout<<span(x,y,6);
    return 0;
}