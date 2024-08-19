#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sol(int arr[], int i, int j, int sum){
    if(j==i+1){
        return max(arr[i],arr[j]);
    }
    else{
        return max(sum-sol(arr,i+1,j,sum-arr[i]),sum-sol(arr,i,j-1,sum-arr[j]));
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += arr[i];
    
    cout << "The maximum possible sum of a subarray is: " << sol(arr, 0, n-1, sum)<<endl;   
    return 0;
}