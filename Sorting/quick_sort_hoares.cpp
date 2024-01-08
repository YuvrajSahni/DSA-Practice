#include <iostream>
using namespace std;

int hoare(int arr[], int l, int h)
{
    int pivot=arr[l];
    int i=l-1;
    int j=h+1;
    while(true)
    {
        do
        {
            i++;
        } while(arr[i]<pivot);
        do
        {
            j--;
        } while(arr[j]>pivot);

        if(i>=j)
        {
            return j;
        }

        swap(arr[i],arr[j]);       
    }
}

void q_sort(int arr[], int l, int h)
{
    if(l<h)
    {
        int p=hoare(arr,l,h);
        q_sort(arr,l,p);
        q_sort(arr,p+1,h);
    }
}

int main()
{
    int x[]={5,3,8,4,2,7,1,10};
    q_sort(x,0,7);
    return 0;
}