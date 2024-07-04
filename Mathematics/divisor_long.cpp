#include <iostream>
using namespace std;

void divisors(int x)
{
    int i;
    for(i=1; i*i<x;i++)
    {
        if(x%i==0)
        {
            cout<<i<<endl;
        }
    }
    for(;i>=1;i--)
    {
       if(x%i==0)
        {
            cout<<x/i<<endl;
        } 
    }
}

int main()
{
    int n;
    cin>>n;
    divisors(n);
    return 0;
}