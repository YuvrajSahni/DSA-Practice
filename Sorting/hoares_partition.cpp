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

int main()
{
    int x[]={5,3,8,4,2,7,1,10};
    cout<<hoare(x,0,7);

    return 0;
}