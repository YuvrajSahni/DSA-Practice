#include <iostream>
using namespace std;

bool subsequence(string s1, string s2, int n, int m)
{
    if(m==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }
    if(s1[n-1]==s2[m-1])
    {
        return subsequence(s1,s2,n-1,m-1);
    }
    else
    {
        return subsequence(s1,s2,n-1,m);
    }
}

int main()
{
    cout<<boolalpha<<subsequence("ABCDEF","ADE",6,3);
    
    return 0;
}