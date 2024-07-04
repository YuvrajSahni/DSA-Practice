#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str)
{
    string rev=str;
    reverse(rev.begin(),rev.end());
    return(rev==str);
}

int main()
{
    cout<<boolalpha<<palindrome("ABCDCBA");
    return 0;
}