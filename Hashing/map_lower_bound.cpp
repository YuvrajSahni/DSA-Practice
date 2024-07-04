#include <iostream>
#include <map>

using namespace std;

int main()
{
    map <int,int> m;
    m.insert({10,200});
    m.insert({5,300});
    m.insert({20,400});
    auto it = m.lower_bound(10);
    if(it!=m.end())
    {
        cout<<(*it).first;
    }
    else
    {
        cout<<"Not equal or greater value";
    }
    return 0;
}