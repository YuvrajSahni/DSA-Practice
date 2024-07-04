#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int n1, int n2)
{
    for(int i=0; i<n1 ;i++)
    {
        if(arr1[i]=arr1[i+1])
            {
                continue;
            }
        for(int j=i;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}

int main()
{
    int x1[]={3,5,10,10,10,15,15,20};
    int x2[]={5,10,10,15,30};
    intersection(x1,x2,8,5);
    
    return 0;
}