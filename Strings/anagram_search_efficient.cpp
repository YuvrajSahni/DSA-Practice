#include <iostream>
using namespace std;

const int CHAR=256;

bool same(int ct[], int cp[])
{
    for(int i=0;i<CHAR;i++)
    {
        if(ct[i]!=cp[i])
        {
            return false;
        }
    }
    return true;
}

bool present(string txt, string pat)
{
    int ct[CHAR]={0};
    int cp[CHAR]={0};
    for(int i=0;i<pat.length();i++)
    {
        ct[txt[i]]++;
        cp[pat[i]]++;
    }
    for(int i=pat.length();i<txt.length();i++)
    {
        if(same(ct,cp))
        {
            return true;
        }
        ct[txt[i]]++;
        ct[txt[i-pat.length()]]--;
    }
    return false;
}

int main()
{
    cout<<boolalpha<<present("geeksforgeeks","frog");
    return 0;
}