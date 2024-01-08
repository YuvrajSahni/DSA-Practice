#include <iostream>
using namespace std;

bool pal(string &str, int start, int end)
{
    if(start>=end)
    {
        return true;
    }
    return (str[start] == str[end]) && pal(str,start+1,end-1);
}

int main()
{
    string x;
    cin>>x;
    cout<<bool(pal(x,0,x.length()-1));
    
    return 0;
}