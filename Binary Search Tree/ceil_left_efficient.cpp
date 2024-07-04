#include <iostream>
#include <set>
using namespace std;

void ceil(int arr[], int n)
{
    cout<<-1<<" ";
    set<int> s;
    s.insert(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(s.lower_bound(arr[i])!=s.end())
        {
            cout<<*(s.lower_bound(arr[i]))<<" ";
        }
        else
        {
            cout<<-1<<" ";
        }
        s.insert(arr[i]);
    }
}

int main()
{
    int x[]={2,8,30,15,25,12};
    int n=sizeof(x)/sizeof(x[0]);
    ceil(x,n);
    return 0;
}