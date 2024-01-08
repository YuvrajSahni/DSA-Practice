#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int min_coins(int coin[], int n, int amount)
{
    sort(coin,coin+n);
    int res=0;
    for(int i=n-1;i>=0;i--)
    {
        if(coin[i]<=amount)
        {
            int c=floor(amount/coin[i]);
            res+=c;
            amount-=c*coin[i];
        }
        if(amount==0)
        {
            break;
        }
    }
    return res;
}

int main()
{
    int coin[]={5,10,2,1};
    int n=4;
    int amount=57;
    cout<<min_coins(coin,n,amount);
    return 0;
}