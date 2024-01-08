#include <iostream>
using namespace std;

int max_profit(int price[], int start, int end)
{
    if(end<=start)
    {
        return 0;
    }
    int profit=0;
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<=end;j++)
        {
            if(price[j]>price[i])
            {
                int curr_profit = price[j]-price[i] + max_profit(price,start,i-1) + max_profit(price, j+1, end);
                profit=max(profit,curr_profit);
            }
        }
    }
    return profit;
}

int main()
{
    int x[]={1,5,3,8,12};
    cout<<max_profit(x,0,4);
    
    return 0;
}