#include <iostream>
using namespace std;

void factor(int x)
{
    for(int i= 2;i*i<x;i++)
    {
        while(x%i==0)
        {
            cout<<i;
            x=x/i;
        }
    }
    if(x>1)
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