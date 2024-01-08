#include <iostream>
using namespace std;

void bit(int n)
{
    int count=0;
    while(n>0)
    {
        n=(n&(n-1));
        count++;
    
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