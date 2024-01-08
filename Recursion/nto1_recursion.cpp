#include <iostream>
using namespace std;

int fun(int n)
{
    if(n==0)
    {
        return 0;
    }
    
    cout<<n<<" ";
    fun(n-1);
    return 0;
}

int main()
{
    int x;
    cin>>x;
    fun(x);
    return 0;
}