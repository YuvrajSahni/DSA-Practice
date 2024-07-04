#include <iostream>
using namespace std;

int first_pp(int petrol[], int distance[], int n)
{
    int curr_petrol=0;
    int start=0;
    int prev_petrol=0;
    for(int i=0;i<n;i++)
    {
        curr_petrol+=(petrol[i]-distance[i]);
        if(curr_petrol<0)
        {
            start=i+1;
            prev_petrol+=curr_petrol;
            curr_petrol=0;
        }
    }
    return (curr_petrol+prev_petrol)>=0?(start+1):-1;
}

int main()
{
    int x[]={4,8,7,4};
    int y[]={6,5,3,5};
    cout<<first_pp(x,y,4);
    
    return 0;
}