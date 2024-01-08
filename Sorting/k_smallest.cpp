#include <iostream>
#include <algorithm>

using namespace std;

int element(int arr[], int n, int k)
{
    sort(arr,arr+n);
    return arr[k-1];
    
    return 0;
}

int main()
{
    int x[]={10,5,30,12};
    cout<<element(x,4,2);
    return 0;
}