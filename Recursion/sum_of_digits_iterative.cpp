#include <iostream>
using namespace std;

int res(int n)
{
    int res=0;
    while(n>0)
    {
        res=res+n%10;
        n=n/10;
    }
    return res;
}

int main()
{
    int x;
    cin>>x;
    cout<<res(x);

    return 0;
}