#include <iostream>
using namespace std;

void bit(int n)
{
    int count=0;
    while(n>0)
    {
        if(n%2!=0)
        {
            count++;
        }
        n=n/2;
    }
    cout<<count;
}

int main()
{
    int x;
    cin>>x;
    bit(x);
    return 0;
}