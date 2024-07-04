#include <iostream>
using namespace std;

int fact(int n)
{
    
    int result=1;
    for(int i=2; i<=n; i++)
    {
        result*=i;
    }
    int count=0;
    cout<<result<<endl;
    while(result%10==0)
    {
        count++;
        result/=10;
    }
    return count;
}

int main()
{
    int x;
    cin>>x;
    cout<<fact(x);
    return 0;
}