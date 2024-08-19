#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int lis(int arr[],int n){
    int lis[n];
    lis[0]=1;
    for (int i = 1; i < n; i++){
        lis[i] = 1;
        for (int j = 0; j < i; j++){
            if (arr[j] < arr[i]){
                lis[i] = max(lis[i],lis[j] + 1);
            }
        }
    }
    int res = lis[0];
    for (int i = 1; i < n; i++){
        res = max(res,lis[i]);
    }
    return res;
}
int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of LIS is " << lis(arr, n)<<endl;
    return 0;
}