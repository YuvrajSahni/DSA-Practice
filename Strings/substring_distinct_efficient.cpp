#include <iostream>
#include <vector>

using namespace std;

int longest(string str)
{
    int n=str.length();
    int res=0;
    vector<int> prev(256,-1);
    int i=0;
    for(int j=0;j<n;j++)
    {
        i=max(i,prev[str[j]]+1);
        int max_end=j-i+1;
        res=max(res,max_end);
        prev[str[j]]=j;
    }
    return res;
}

int main()
{
    cout<<longest("geeksforgeeks");
    return 0;
}