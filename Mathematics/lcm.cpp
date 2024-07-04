#include <iostream>
using namespace std;

int lcm(int x,int y)
{
    int res=max(x,y);
    while(true)
    {
        if(res%x==0 && res%y==0)
        {
            return res;
        }
        res++;
    }
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<lcm(m,n);
    
    return 0;
}