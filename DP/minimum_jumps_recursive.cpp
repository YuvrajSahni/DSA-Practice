#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_jumps(int arr[], int n){
    if(n==1){
        return 0;
    }
    int res = INT_MAX;
    for(int i=0; i<n-1; i++){
        if(i+arr[i] >= n-1){
            int sub_res = min_jumps(arr, i+1);
            if(sub_res!=INT_MAX){
                res = min(res, sub_res + 1);
            }
        }
    }
    return res;
}
int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Minimum number of jumps to reach the end is: " << min_jumps(arr, n)<<endl;
    return 0;
}