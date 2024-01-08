#include <iostream>
using namespace std;

void divisors(int x)
{
    for(int i=1; i*i<x;i++)
    {
        if(x%i==0)
        {
            cout<<i<<endl;
            if(i!=x/i)
            {
                cout<<x/i<<endl;
            }
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