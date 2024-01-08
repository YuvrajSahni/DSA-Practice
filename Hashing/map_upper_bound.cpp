#include <iostream>
#include <map>

using namespace std;

int main()
{
    map <int,int> m;
    m.insert({10,200});
    m.insert({5,300});
    m.insert({20,400});
    auto it = m.upper_bound(10);
    if(it!=m.end())
    {
        cout<<(*it).first;
    }
    else
    {
        cout<<"No greater value";
    }
    return 0;
}