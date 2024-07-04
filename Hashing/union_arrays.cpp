#include <iostream>
#include <algorithm>

using namespace std;

int union_array(int a[], int b[], int m, int n)
{
    int c[m+n], count=0;
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
            count++;
        }
    }
    return count;
}

int main()
{
    int x1[]={15,20,5,15};
    int x2[]={15,15,15,20,10};
    cout<<union_array(x1,x2,4,5);

    return 0;
}