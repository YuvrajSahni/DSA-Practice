#include <iostream>
using namespace std;

bool two(int n)
{
    if(n==0)
    {
        return false;
    }
    while(n!=1)
    {
        if(n%2!=0)
        {
            return false;
        }
        n=n/2;
    }
    return true;
}

int main()
{
    int x;
    cin>>x;
    cout<<two(x);
    return 0;
}