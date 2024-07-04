#include <iostream>
using namespace std;

int count_merge(int arr[], int l, int m, int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[l+i]; 
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[m+1+i];
    }
    int res=0,i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            res=res+(n1-i);
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
    return res;
}

int inversions(int arr[], int l, int r)
{
    int res=0;
    if(l<r)
    {
        int m = l+(r-l)/2;
        res+=inversions(arr,l,m);
        res+=inversions(arr,m+1,r);
        res+=count_merge(arr,l,m,r);
    }
    return res;
}

int main()
{
    int x[]={2,4,1,3,5};
    cout<<inversions(x,0,5);
    
    return 0;
}