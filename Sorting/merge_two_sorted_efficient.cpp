#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int n1, int n2)
{
    int i=0, j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else
        {
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while(i<n1)
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<n2)
    {
        cout<<arr2[j]<<" ";
        j++;
    }
}

int main()
{
    int x1[]={10,20,35};
    int x2[]={5,50,50};
    merge(x1,x2,3,3);
    
    return 0;
}