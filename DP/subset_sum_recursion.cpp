#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count(int arr[], int n, int sum){
    if(n==0){
        if(sum==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    return count(arr,n-1,sum)+count(arr,n-1,sum-arr[n-1]);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of ways to get sum " << sum << " is " << count(arr, n, sum) << endl;
    return 0;
}