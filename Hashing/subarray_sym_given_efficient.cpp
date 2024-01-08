#include <iostream>
#include <unordered_set>

using namespace std;

bool sub_sum(int arr[], int n, int x)
{
    unordered_set<int> s;
    int pre_sum=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(pre_sum==x)
        {
            return true;
        }
        if(s.find(pre_sum-x)!=s.end())
        {
            return true;
        }
        
        s.insert(pre_sum);
    }
    return false;
}

int main()
{
    int x[]={5,8,6,13,3,-1};
    cout<<sub_sum(x,6,22);
    
    return 0;
}