#include <iostream>
using namespace std;

bool rotation(string s1, string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    return ((s1+s1).find(s2)!=string::npos);
}

int main()
{
    string s1="ABCD";
    string s2="CDAB";
    if(rotation(s1,s2))
    {
        cout<<"Strings are rotation of each other"<<endl;
    }
    else
    {
        cout<<"String are NOT rotation of each other"<<endl;
    }
    return 0;
}