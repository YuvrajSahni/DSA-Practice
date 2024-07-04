#include <iostream>

using namespace std;

void search(string text, string pat)
{
    int n = text.length();
    int m = pat.length();
    for(int i=0;i<=n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(text[i+j]!=pat[j])
            {
                break;
            }
        }
        
        if(j==m)
        {
            cout<<i<<" "; 
        }
    }
}

int main()
{
    cout<<"Pattern found at index: "<<endl;
    search("ABABABCD","ABAB");
    return 0;
}