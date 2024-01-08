#include <iostream>
#include <math.h>
using namespace std;

bool prime(int x)
{
    if(x==1)
    {
        return false;
    }

    for(int i=2; i<sqrt(x);i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    cout<<prime(n);
    
    return 0;
}