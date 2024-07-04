#include <iostream>
using namespace std;

int repeat(int arr[], int n)
{
   bool visited[]={0,0,0,0,0};
   for(int i=0;i<n;i++)
   {
    if(visited[arr[i]])
    {
        return arr[i];
    }
    visited[arr[i]]=true;
   }
   return -1; 
}

int main()
{
    int x[]={0,2,1,3,2,2};
    cout<<repeat(x,6);
    
    return 0;
}