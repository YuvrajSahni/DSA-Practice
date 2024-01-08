#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> merge_k(vector<vector<int>> arr)
{
    vector<int> res;
    for(vector<int> v: arr)
    {
        for(int x:v)
        {
            res.push_back(x);
        }
    }
    sort(res.begin(),res.end());
    return res;
}

int main()
{
    vector<vector<int>> arr{{10,20,30},{5,15},{1,9,11,18}};
    vector<int> res=merge_k(arr);
    for(auto x:res)
    {
        cout<<x<<" ";
    }
    
    return 0;
}