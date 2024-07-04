#include <iostream>
using namespace std;

void intersection(int a[], int b[], int m, int n)
{
    int i=0;
    int j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}

int main()
{
    int x1[]={2,20,20,40,60};
    int x2[]={10,20,20,20};
    intersection(x1,x2,5,4);
    
    return 0;
}