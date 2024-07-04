#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    int dividend, divisor, remainder;
    dividend=x;
    divisor=y;
    remainder=x%y;
    while(remainder!=0)
    {
        dividend=divisor;
        divisor=remainder;
        remainder=dividend%divisor;
    }
    return divisor;
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<gcd(m,n);
    
    return 0;
}