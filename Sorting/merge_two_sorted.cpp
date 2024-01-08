#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr1[], int arr2[], int n1, int n2)
{
    int size=n1+n2;
    int temp[size];
    for(int i=0;i<n1;i++)
    {
        temp[i]= arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        temp[n1+i]=arr2[i];
    }
    sort(temp,temp+size);
    for(int i=0;i<size;i++)
    {
        cout<<temp[i]<<" ";
    }
}

int main()
{
    int x1[]={10,15,20};
    int x2[]={5,6,6,15};
    merge(x1,x2,3,4);
    
    return 0;
}