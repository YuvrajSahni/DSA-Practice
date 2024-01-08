#include <iostream>
using namespace std;

void fill(string str, int *lps)
{
    int n=str.length(), len=0;
    lps[0]=0;
    int i=1;
    while(i<n)
    {
        if(str[i]==str[len])
        {
            len++;
            lps[i]=len;
            i++;    
        }
        else
        {
            if(len==0)
            {
                lps[i]=0;
                i++;
            }
            else
            {
                len=lps[len-1];
            }
        }
    }
}

void kmp(string pat, string text)
{
    int n= text.length();
    int m=pat.length();
    int lps[m];
    fill(pat,lps);
    int i=0,j=0;
    while(i<n)
    {
        if(pat[j]==text[i])
        {
            i++;
            j++;
        }

        if(j==m)
        {
            cout<<"Pattern found at index: "<<i-j<<endl;
            j=lps[j-1];
        }

        else if(i<n && pat[j]!=text[i])
        {
            if(j==0)
            {
                i++;
            }
            else
            {
                j=lps[j-1];
            }
        }
    }
}

int main()
{
    kmp("ababa","ababcababaad");
    return 0;
}