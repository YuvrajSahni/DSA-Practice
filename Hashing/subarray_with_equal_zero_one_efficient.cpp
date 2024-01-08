#include <iostream>
#include <unordered_map>
using namespace std;

int sub(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i] = (arr[i] == 0) ? -1 : 1;
    }

    unordered_map<int, int> m;
    int pre_sum = 0, res = 0;
    for(int i=0;i<n;i++)
    {
        pre_sum += arr[i];
        if(pre_sum == 0)
        {
            res = i+1;
        } 
        if(m.find(pre_sum+n)!=m.end())
        {
            if(res<i-m[pre_sum+n])
            {
                res=i-m[pre_sum+n];
            } 
        }
        else 
        {
            m[pre_sum + n] = i;
        }
    }   
    return res;
}



int main()
{
    int arr[] = {1, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << sub(arr, n);
}