#include <iostream>
using namespace std;

int second(int arr[], int n)
{
    int res=-1;
    int largest=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;
}

int main()
{
    int x[]={12,20,65,14,15,3};
    cout<<second(x, 6);
    return 0;
}