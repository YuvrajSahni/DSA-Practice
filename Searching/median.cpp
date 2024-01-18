#include <iostream>
#include <algorithm>

using namespace std;

int med(int a1[], int a2[], int n1, int n2)
{
    int temp[n1+n2];
    for(int i=0;i<n1;i++)
    {
        temp[i] = a1[i];
    }
    for(int i=0;i<n2;i++){
        temp[n1+i]=a2[i];
    }
    sort(temp,temp+n1+n2);
    //return temp[0];
    if((n1+n2)%2==0)
    {
        return (temp[(n1+n2)/2] + temp[(n1+n2)/2-1])/2;
    }
    else
    {
        return temp[(n1+n2)/2];
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