#include <iostream>
#include <string>
#include <vector>

using namespace std;

int edit_dist(string s1,string s2, int m, int n){
    if(m==0) 
        return n;
    if(n==0) 
        return m;
    if(s1[m-1]==s2[n-1]) 
        return edit_dist(s1,s2,m-1,n-1);
    else
        return 1+min(edit_dist(s1,s2,m-1,n-1),min(edit_dist(s1,s2,m,n-1),edit_dist(s1,s2,m-1,n)));
}
int main(){
    string s1="sunday";
    string s2="saturday";
    cout<<edit_dist(s1,s2,s1.length(),s2.length());
    return 0;
}