#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int chain(int arr[], int i, int j){
    if(i+1==j){
        return 0;
    }
    int mini = INT_MAX;
    for(int k=i+1; k<j; k++){
        mini = min(mini, chain(arr, i, k) + chain(arr, k, j) + arr[i]*arr[k]*arr[j]);
    }
    return mini;
}

int main()
{
    int arr[] = {20, 10, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Minimum number of multiplications needed is " << chain(arr, 0, n-1)<<endl;
    return 0;
}