#include <iostream>
using namespace std;

int main()
{
    int arr[]={25,7,10,15,20};
    int n=5;
    int temp[n];
    int size=0;
    for(int i=0;i<n;i++)
    {
        temp[i]=arr[i];
        size++;
        int j=i;
        while(j>0 && temp[j]<temp[j-1])
        {
            swap(temp[j],temp[j-1]);
            j--;
        }
    }
    if(size%2==0)
    {
        cout<<temp[size/2];
    }
    else
    {
        cout<<(temp[size/2]+temp[(size-1)/2])/2;
    }
    
    return 0;
}