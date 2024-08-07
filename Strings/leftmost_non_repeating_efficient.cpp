#include <iostream>
using namespace std;

const int CHAR=256;
int leftmost(string s)
{
    int fi[CHAR];
    fill(fi,fi+CHAR,-1);
    for(int i=0;i<s.length();i++)
    {
        if(fi[s[i]]==-1)
        {
            fi[s[i]]=i;
        }
        else
        {
            fi[s[i]]=-2;
        }
    }
    int res=INT_MAX;
    for(int i=0;i<CHAR;i++)
    {
        if(fi[i]>=0)
        {
            res=min(res,fi[i]);
        }
    }
    return (res==INT_MAX)?-1: res;
}

int main()
{
    cout<<leftmost("abbcbda");
    
    return 0;
}