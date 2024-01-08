#include <iostream>
using namespace std;

void factor(int x)
{
    while(x%2==0)
    {
        cout<<2;
        x=x/2;
    }

    while(x%3==0)
    {
        cout<<3;
        x=x/3;
    }

    for(int i=5; i*i<x; i=i+6)
    {
        while(x%i==0)
        {
            cout<<i;
            x=x/i;
        }
        while(x%(i+2)==0)
        {
            cout<<(i+2);
            x=x/(i+2);
        }

    }
    if(x>3)
    {
        cout<<x;
    }
}

int main()
{
    int n;
    cin>>n;
    factor(n);
    return 0;
}