#include <iostream>
using namespace std;

int root(int x)
{
    int low=1, high=x, ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int msq=mid*mid;
        if(msq==x)
        {
            return mid;
        }
        else if(msq>x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<root(n);
    
    return 0;
}