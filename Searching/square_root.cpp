#include <iostream>
using namespace std;

int root(int x)
{
    // if(x==0||x==1)
    // {
    //     return x;
    // }
    int i=1;
    while(i*i<=x)
    {
        i++;
    }
    return i-1;
}

int main()
{
    int n;
    cin>>n;
    cout<<root(n);
    
    return 0;
}