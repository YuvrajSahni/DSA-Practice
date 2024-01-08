#include <iostream>
#include <conio.h>


using namespace std;

int rope(int n, int a, int b, int c)
{
    if(n==0)
    {
        return 0;
    }

    if(n<0)
    {
        return -1;
    }

    int res=max(rope(n-a,a,b,c), rope(n-b,a,b,c));
    int res2=max(res,rope(n-c,a,b,c)); 
    
    if(res2==-1)
    {
        return -1;
    }

    return res2+1;
}

int main()
{
    cout<<rope(5,2,1,5);
    return 0;
}