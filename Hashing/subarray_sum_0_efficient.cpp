#include <iostream>
#include <unordered_set>

using namespace std;

bool sub_sum(int arr[], int n)
{
    unordered_set<int> s;
    int pre_sum=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(s.find(pre_sum)!=s.end())
        {
            return true;
        }
        if(pre_sum==0)
        {
            return true;
        }
        s.insert(pre_sum);
    }
    return false;
}

int main()
{
    int x[]={-3,4,-3,-1,1};
    cout<<boolalpha<<sub_sum(x,5);
    
    return 0;
}