#include <iostream>
#include <unordered_set>

using namespace std;

int distinct(int arr[], int n)
{
    unordered_set <int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
    // unordered_set <int> s(arr,arr+n);
    // return s.size();
}

int main()
{
    int arr[]={15,12,13,12,13,13,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<distinct(arr,n);
    
    return 0;
}