#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMin(int arr[], int n, int val){
    if(val==0){
        return 0;
    }
    int res = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] <=val){
            int sub_res = getMin(arr, n, val-arr[i]);
            if(sub_res!=INT_MAX){
                res = min(res,sub_res+1);
            }
        }
    }
    return res;
}
int main()
{   
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 15;
    cout << "Minimum number of coins required: " << getMin(arr, n, target) << endl;
    return 0;
}