#include <iostream>
#include <map>

using namespace std;

int main()
{
    map <int,int> m;
    m.insert({10,200});
    m[5]=100;
    m.insert({3,300});
    for(auto &x:m)
    {
        cout<<x.first<<" "; 
        cout<<x.second<<" "; 
    }
    return 0;
}