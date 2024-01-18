#include <iostream>
using namespace std;

bool two(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int x[]={2,3,4,8,9,20,40};
    cout<<boolalpha<<two(x,7,32);
    
    return 0;
}