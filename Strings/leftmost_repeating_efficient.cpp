#include <iostream>
using namespace std;

const int CHAR=256;
int leftmost(string s)
{
    int findex[CHAR];
    fill(findex,findex+CHAR,-1);
    int res=INT_MAX;
    for(int i=0;i<s.length();i++)
    {
        int fi = findex[s[i]];
        if(fi==-1)
        {
            findex[s[i]]=i;
        }
        else
        {
            res=min(res,fi);
        }
    }
    return (res==INT_MAX)?-1:res;
}

int main()
{
    cout<<leftmost("abccbd");
    return 0;
}