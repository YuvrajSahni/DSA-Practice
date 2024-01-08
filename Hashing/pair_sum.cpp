#include <iostream>
using namespace std;

void pair_sum(int arr[], int n, int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<"Yes";
                return;
            }
        }
    }
    cout<<"No";
}

int main()
{
    int x[]={3,2,8,15,-8};
    pair_sum(x,5,17);
    return 0;
}