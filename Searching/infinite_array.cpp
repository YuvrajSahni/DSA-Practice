#include <iostream>
using namespace std;

int infinite(int arr[], int x)
{
    int i=0;
    while(true)
    {
        if(arr[i]==x)
        {
            return i;
        }
        if(arr[i]>x)
        {
            return -1;
        }
        i++;
    }
} 

int main()
{
    int x[]={10,20,30,40,50,60,70,100,132,123};
    cout<<infinite(x,60);
    return 0;
}