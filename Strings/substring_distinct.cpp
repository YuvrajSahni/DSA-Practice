#include <iostream>
#include <vector>

using namespace std;

bool distinct(string str, int i, int j)
{
    vector <bool> visited(256);
    for(int k=i;k<=j;k++)
    {
        if(visited[str[k]]==true)
        {
            return false;
        }
        visited[str[k]]=true;
    }
    return true;
}

int longest(string str)
{
    int n=str.length();
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(distinct(str,i,j))
            {
                res=max(res,j-i+1);
            }
        }
    }
    return res;
}

int main()
{
    cout<<longest("geeksforgeeks");
    return 0;
}