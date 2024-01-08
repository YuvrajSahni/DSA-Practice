#include <iostream>
using namespace std;

bool subsequence(string s1, string s2, int n, int m)
{
    int j=0;
    for(int i=0;i<n && j<m;i++)
    {
        if(s1[i]==s2[j])
        {
            j++;
        }
    }
    return j==m;
}

int main()
{
    cout<<boolalpha<<subsequence("ABCDEF","ADE",6,3);
    
    return 0;
}