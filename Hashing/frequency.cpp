#include <iostream>
using namespace std;

void freq(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            continue;
        }
        int freq=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;
            }
        }
        cout<<arr[i]<<" "<<freq<<endl;
    }
}
        
        
int main()
{
    int x[]={10,12,10,15,10,20,12,12};
    int n=sizeof(x)/sizeof(x[0]);
    freq(x,n);
    return 0;
}