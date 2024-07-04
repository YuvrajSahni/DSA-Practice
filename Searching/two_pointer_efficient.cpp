#include <iostream>
using namespace std;

void two(int arr[], int n, int x)
{
    int left=0;
    int right=n-1;
    while(left<right)
    {
        if(arr[left]+arr[right]==x)
        {
            break;
        }
        else if(arr[left]+arr[right]>=x)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    cout<<left<<endl<<right;
    //return false;
}

int main()
{
    int x[]={3,5,9,2,8,10,11};
    two(x,7,17);

    return 0;
}