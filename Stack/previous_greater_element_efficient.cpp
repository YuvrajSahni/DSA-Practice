#include <iostream>
#include <stack>
using namespace std;

void greater_ele(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    for(int i=0;i<n;i++)
    {
        while(s.empty()==false && s.top()<=arr[i])
        {
            s.pop();
        }
        int pg=s.empty()?-1:s.top();
        cout<<pg<<" ";
        s.push(arr[i]);
    }
}

int main()
{
    int x[]={15,10,18,12,4,6,2,8};
    greater_ele(x,8);
    
    return 0;
}