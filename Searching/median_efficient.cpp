#include <iostream>
using namespace std;

double med(int a1[], int a2[], int n1, int n2)
{
    int begin=0;
    int end=n1;
    while(begin<=end)
    {
        int i1 = (begin+end)/2;
        int i2 = (n1+n2+1)/2-i1;
        
        int min1 = (i1==n1)? INT64_MAX: a1[i1];
        int max1 = (i1==0)? INT64_MIN: a1[i1-1];
        int min2 = (i2==n2)? INT64_MAX: a2[i2];
        int max2 = (i2==0)? INT64_MIN: a2[i2-1];
        if(max1<=min2 && max2<=min1)
        {
            if((n1+n2)%2==0)
            {
                return((double)max(max1,max2) + min(min1,min2))/2; 
            }
            else
            {
                return((double)max(max1,max2));
            }
        }

        else if(max1>max2)
        {
            end=i1-1;
        }
        else
        {
            begin=i1+1;
        }
    }
    return 0;
}

int main()
{
    int x[]={10,20,30};
    int y[]={5,15,25};
    cout<<med(x,y,3,3);

    return 0;
}