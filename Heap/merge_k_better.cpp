#include <iostream>
#include <vector>
using namespace std;

vector<int> merge_k(vector<int> arr1, vector<int> arr2)
{
    int i=0,j=0;
    vector<int> arr3;
    while(i<arr1.size() && j<arr2.size())
    {
        if(arr1[i]<arr2[j])
        {
            arr3.push_back(arr1[i++]);
        }
        else
        {
            arr3.push_back(arr2[j++]);
        }
    }
    while(i<arr1.size())
    {
        arr3.push_back(arr1[i++]);
    }
    while(j<arr2.size())
    {
        arr3.push_back(arr2[j++]);
    }
    return arr3;
}

vector<int> merge_array(vector<vector<int>> arr)
{
    vector<int> res=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        res=merge_k(res,arr[i]);
    }
    return res;
}

int main()
{
    vector<vector<int>> arr{{10,20,30},{5,15},{1,9,11,18}};
    vector<int> res=merge_array(arr);
    for(auto x:res)
    {
        cout<<x<<" ";
    }
    
    return 0;
}