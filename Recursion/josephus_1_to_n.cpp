#include <iostream>
using namespace std;

int jos(int n, int k)
{
    if(n==1)
    {
        return 0;
    }

    return ((jos(n-1,k) + k)%n);
}

int myjos(int n, int k)
{
    return jos(n,k)+1;
}

int main()
{
    cout<<myjos(5,2);
    return 0;
}