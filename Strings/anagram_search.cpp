#include <iostream>
using namespace std;

const int CHAR=256;
bool anagram(string pat, string txt, int i)
{
    int count[CHAR]={0};
    for(int j=0;j<pat.length();j++)
    {
        count[pat[j]]++;
        count[txt[i+j]]--;
    }
    for(int j=0;j<CHAR;j++)
    {
        if(count[j]!=0)
        {
            return false;
        }
    }
    return true;
}

bool present(string txt, string pat)
{
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<n-m;i++)
    {
        if(anagram(pat,txt,i))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cout<<boolalpha<<present("geeksforgeeks","frog");
    return 0;
}