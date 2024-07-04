#include <iostream>
using namespace std;

int count_trailing(int n)
{
    int res=0;
    for(int i=5;i<=n; i=i*5)
    {
        res=res+n/i;
    }
    return res;
}

int main()
{
    int x;
    cin>>x;
    cout<<count_trailing(x);

    return 0;
}