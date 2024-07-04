#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    while(x!=y)
    {
        if(x>y)
        {
            x=x-y;
        }
        else
        {
            y=y-x;
        }
    }
    return x;
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
    return 0;
}