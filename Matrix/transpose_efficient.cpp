#include <iostream>
using namespace std;

const int N=4;

void transpose(int arr[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<arr[i][j]<<" ";
            if(j==N-1)
            {
                cout<<endl;
            }
        }
    }
}

int main()
{
    int arr[N][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    transpose(arr);
    
    return 0;
}