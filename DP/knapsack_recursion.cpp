#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knapsack(int W, int wt[], int val[], int n){
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(W, wt, val, n-1);
    }
    else{
        return max(val[n-1] + knapsack(W-wt[n-1], wt, val, n-1), knapsack(W, wt, val, n-1));
    }
}

int main()
{
    int W = 50;
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int n = sizeof(val)/sizeof(val[0]);
    cout << "Maximum value that can be put in knapsack of capacity " << W << " is " << knapsack(W, wt, val, n) << endl;
    return 0;
}