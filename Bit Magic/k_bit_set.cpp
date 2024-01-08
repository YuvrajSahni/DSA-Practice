#include <iostream>
using namespace std;

void bit(int n, int k)
{
    if(((n>>(k-1)) & 1)==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    
}

int main()
{
    int x,y;
    cin>>x>>y;
    bit(x,y);
    return 0;
}