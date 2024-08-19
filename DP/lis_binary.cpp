#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ceil_ind(int arr[], int l, int h, int target){
    while(h>l){
        int mid = l+(h-l)/2;
        if(arr[mid]>=target){
            h=mid;
        }
        else{
            l=mid+1;
        }
    }
    return h;

}
int lis(int arr[], int n){
    int tail[n];
    tail[0]=arr[0];
    int len = 1;

    for(int i=1;i<n;i++){
        if(arr[i]>tail[len-1]){
            tail[len++]=arr[i];
        }
        else{
            int ind = ceil_ind(tail,0,len-1,arr[i]);
            tail[ind]=arr[i];
        }
    }
    return len;

}
int main()
{
    int arr[] = { 8, 100, 150, 10, 12, 14, 110 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Length of LIS is " << lis(arr, n);
    return 0;
}