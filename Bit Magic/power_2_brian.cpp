#include <iostream>
using namespace std;

bool two(int n)
{
    if(n==0)
    {
        return false;
    }
    return((n&(n-1))==0);
}

int main()
{
    int x;
    cin>>x;
    cout<<bool(two(x));
    return 0;
}