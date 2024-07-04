#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    int res=min(x,y);
    while (res>0)
    {
        if(x%res==0 && y%res==0)
        {
            break;
        }
        res--;
    }
    return res;
    
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
    
    return 0;
}