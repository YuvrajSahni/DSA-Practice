#include <iostream>
using namespace std;

bool prime(int x)
{
    if(x==1)
    {
        return false;
    }

    if(x==2 || x==3)
    {
        return true;
    }

    if(x%2==0 || x%3==0)
    {
        return false;
    }

    for(int i=5 ; i*i<=x ; i=i+6)
    {
        if(x%i==0 || x%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}

void factor(int x)
{
    for(int i=2;i<x;i++)
    {
        if(prime(i))
        {
            int y=i;
            while(x%y==0)
            {
                cout<<i;
                y=y*i;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    factor(n);
    return 0;
}