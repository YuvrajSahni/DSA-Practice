#include <iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (sum(n/10) + n%10);
}

int main()
{
    int x;
    cin>>x;
    cout<<sum(x);
    return 0;
}