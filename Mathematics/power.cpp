#include <iostream>
using namespace std;

double power(int x, int y)
{
    double temp=1;
    for(int i=0;i<y;i++)
    {
        temp=temp*x;
    }
    return temp;
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<power(m,n);
    return 0;
}