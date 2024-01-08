#include <iostream>
using namespace std;

int main()
{
    int arr[]={2,2,3,3,4,5,4,5,5};
    int count=0;
    for(int i=0;i<9;i++)
    {
        count=count^arr[i];
    }
    cout<<count;
    return 0;
}