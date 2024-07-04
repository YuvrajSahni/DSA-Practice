#include <iostream>
using namespace std;

bool two(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int x[]={3,5,9,2,8,10,11};
    cout<<boolalpha<<two(x,7,17);

    return 0;
}