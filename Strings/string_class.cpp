#include <iostream>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    cout<<str.length()<<endl;
    str=str+"xyz";
    cout<<str<<endl;
    cout<<str.substr(1,3)<<endl;
    cout<<str.find("for")<<endl;
    string s1= "abc";
    string s2= "bcd";
    if(s1==s2)
    {
        cout<<"Same";
    }
    else if(s1>s2)
    {
        cout<<"Greater";
    }
    else
    {
        cout<<"Smaller";
    }
    return 0;
}