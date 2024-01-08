#include <iostream>
#include <unordered_set>

using namespace std;

int union_array(int a[], int b[], int m, int n)
{
    unordered_set<int> s;
    for(int i=0;i<m;i++)
    {
        s.insert(a[i]);
    }
    for(int j=0;j<n;j++)
    {
        s.insert(b[j]);
    }
    return s.size();
}

int main()
{
    int x1[]={15,20,5,15};
    int x2[]={15,15,15,20,10};
    cout<<union_array(x1,x2,4,5);
    
    return 0;
}