#include <iostream>
using namespace std;

int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    return (fibo(n-1)+fibo(n-2));
    
}


int main()
{
    int x;
    cin>>x;
    cout<<fibo(x)<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<fibo(i);
    }
    return 0;
}