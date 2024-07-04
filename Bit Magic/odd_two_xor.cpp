#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    int Xor=0, res1=0, res2=0;
    for(int i=0; i<n; i++)
    {
        Xor = Xor^arr[i];
    }
    int sn = Xor & (~(Xor-1));
    for(int i=0; i<n; i++)
    {
        if((arr[i] & sn)!=0)
        {
            res1 = res1^arr[i];
        }
        else
        {
            res2 = res2^arr[i]; 
        }
    }  

    cout<<res1<<endl<<res2;

    return 0;
}