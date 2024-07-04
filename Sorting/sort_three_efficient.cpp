#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    int l=0, m=0, h=n-1;
    while(m<h)
    {
        if(arr[m]==0)
        {
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if(arr[m]==1)
        {
            m++;
        }
        else
        {
            swap(arr[m],arr[h]);
            h--;
        }
    }
}

int main()
{
    int x[]={0,1,1,2,0,1};
    sort(x,6);
    
    return 0;
}