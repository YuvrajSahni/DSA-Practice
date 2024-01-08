#include <iostream>
#include <unordered_set>

using namespace std;

bool pair_sum(int arr[], int n, int sum)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        if(s.find(sum-arr[i])!=s.end())
        {
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}

int main()
{
    int x[]={3,2,8,15,-8};
    cout<<pair_sum(x,5,17);
    return 0;
}