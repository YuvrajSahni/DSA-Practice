#include <iostream>
using namespace std;

int repeat(int arr[], int n)
{
    int slow=arr[0]+1;
    int fast=arr[0]+1;
    do
    {
        slow=arr[slow]+1;
        fast=arr[arr[fast]+1]+1;
    }while(slow!=fast);

    slow=arr[0]+1;
    while(slow!=fast)
    {
        fast=arr[fast]+1;
        slow=arr[slow]+1;
    }
    return slow-1;

}

int main()
{
    int x[]={1,2,4,3,6,5,7,3};
    cout<<repeat(x,8);
    
    return 0;
}