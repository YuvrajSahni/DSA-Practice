#include <iostream>
using namespace std;

int leftmost(string s)
{
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    cout<<leftmost("cabbad");
    return 0;
}