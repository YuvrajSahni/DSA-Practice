#include <iostream>
using namespace std;

const int R=4;
const int C=4;

void search(int arr[R][C], int x)
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<"Found at: ("<<i<<","<<j<<")";
                return;
            }
        }
    }
    cout<<"Not found";
}

int main()
{
    int arr[R][C]={{10,20,30,40}, {15,25,35,45}, {27,29,37,48}, {32,33,39,50}};
    search(arr,29);
    
    return 0;
}