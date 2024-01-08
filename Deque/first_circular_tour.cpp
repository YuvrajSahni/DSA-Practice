#include <iostream>
using namespace std;

int first_pp(int petrol[], int distance[], int n)
{
    for(int start=0;start<n;start++)
    {
        int curr_petrol=0;
        int end=start;
        while(true)
        {
            curr_petrol+=petrol[end]-distance[end];
            if(curr_petrol<0)
            {
                break;
            }
            end=(end+1)%n;
            if(end==start)
            {
                return start+1;
            }
        }   
    }
    return -1;
}

int main()
{
    int x[]={4,8,7,4};
    int y[]={6,5,3,5};
    cout<<first_pp(x,y,4);
    
    return 0;
}