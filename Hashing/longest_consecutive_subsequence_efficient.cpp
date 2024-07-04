#include <iostream>
#include <unordered_set>

using namespace std;

int consecutive(int arr[], int n)
{
    unordered_set<int> s;
    int res=0;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i]-1)==s.end())
        {
            int curr=1;
            while(s.find(curr+arr[i])!=s.end())
            {
                curr++;
            }
            res=max(res,curr);
        }
    }
    return res;
}

int main()
{
    int x[]={1,9,3,4,2,10,13};
    cout<<consecutive(x,7);
    return 0;
}