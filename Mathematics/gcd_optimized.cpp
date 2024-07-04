#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return gcd(y,x%y);
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<gcd(m,n);
    return 0;
}