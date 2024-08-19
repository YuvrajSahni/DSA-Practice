#include <iostream>
#include <vector>
using namespace std;

vector<int> arr(10000,-1);

int fib(int n){
    if(arr[n]==-1){
        int res;
        if(n==0 || n==1){
            return n;
        }
        else{
            res = fib(n-1)+fib(n-2);
        }
        arr[n]=res;
    }
    return arr[n];
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Fibonacci number at position "<<n<<" is: "<<fib(n)<<endl;
    return 0;
}