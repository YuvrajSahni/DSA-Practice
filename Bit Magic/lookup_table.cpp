#include <iostream>
using namespace std;

int table[256];

void initalise()
{
    table[0]=0;
    for(int i=1;i<256;i++)
    {
        table[i] = (i&1) + table[i/2];
    }
}

int count(int n)
{
    int res= table[n & 0xff];
    n=n>>8;
    res=res+table[n & 0xff];
    n=n>>8;
    res=res+table[n & 0xff];
    n=n>>8;
    res=res+table[n & 0xff];
    return res;
}

int main()
{
    int x;
    cin>>x;
    cout<<count(x);
    return 0;
}