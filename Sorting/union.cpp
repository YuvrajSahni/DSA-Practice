#include <iostream>
#include <algorithm>

using namespace std;

void union_sort(int a[], int b[], int m, int n)
{
    int c[m+n];
    for(int i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        c[m+i]=b[i];
    }
    sort(c,c+m+n);
    for(int i=0;i<m+n;i++)
    {
        if(i==0 || c[i]!=c[i-1])
        {
            cout<<c[i]<<" ";
        }
    }
}

int main()
{
    int x1[]={3,5,8};
    int x2[]={2,8,9,10,15};
    union_sort(x1,x2,3,5);

    return 0;
}