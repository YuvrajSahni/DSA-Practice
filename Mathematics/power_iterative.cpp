#include <iostream>
using namespace std;

int power(int x, int y)
{
    int res=1;
    while(y>0)
    {
        if(y%2!=0)
        {
            res=res*x;
        }
        x=x*x;
        y=y/2;
    }
    return res;
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<power(m,n);
    return 0;
}