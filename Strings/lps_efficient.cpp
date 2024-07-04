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

int main()
{
    string txt="abacabad";
    int lps[txt.length()];
    fill(txt,lps);
    for(int i=0;i<txt.length();i++)
    {
        cout<<lps[i]<<" ";
    }
    
    return 0;
}