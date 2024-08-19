#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool palindrome(string s, int start, int end){
    while(start<end){
        if(s[start]!= s[end])
            return false;
        start++;
        end--;
    }
    return true;
}
int pal(string s, int i, int j){
    if(palindrome(s,i,j)){
        return 0;
    }
    int res = INT_MAX;
    for(int k=i;k<j;k++){
        res = min(res, 1+ pal(s, i, k) + pal(s, k+1, j));
    }
    return res;
}

int main()
{
    string s = "aaaabb";
    int n = s.length();
    cout << "Minimum number of edits required: " << pal(s, 0, n-1) << endl;
    return 0;
}