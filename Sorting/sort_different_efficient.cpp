#include <iostream>
using namespace std;

int neg(int arr[], int n)
{
    int i=-1;
    int j=n;
    while(true)
    {
        do
        {
            i++;
        }while(arr[i]<0);
        do
        {
            j--;
        } while (arr[j]>=0);

        if(i>=j)
        {
            return j;
        }
        swap(arr[i],arr[j]);
    }
}

int main()
{
    int x[]={15,-3,-2,18};
    cout<<neg(x,4);
    
    return 0;
}