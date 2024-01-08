#include <iostream>
using namespace std;

int main()
{
    int arr[]={4,3,4,4,4,5,5};
    
    for(int i=0;i<7;i++)
    {
        int count=0;
        for(int j=0; j<7;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count%2 !=0)
        {
            cout<<arr[i];
        }
    }   

    return 0;
}