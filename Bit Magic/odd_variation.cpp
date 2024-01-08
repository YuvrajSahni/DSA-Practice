#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,4,3};
    int count=0;
    int res=0;
    for(int i=0;i<3;i++)
    {
        count=count^arr[i];
    }

    for(int i=1;i<5;i++)
    {
        res=res^i;
    }
    int final = res^count;
    cout<<final;
    return 0;
}