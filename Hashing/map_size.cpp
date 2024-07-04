#include <iostream>
#include <map>

using namespace std;

int main()
{
    map <int,int> m;
    m.insert({10,200});
    cout<<m.size()<<" ";
    cout<<m[5]<<" ";
    cout<<m.size()<<" ";
    m.at(10);
    for(auto &x:m)
    {
        cout<<x.first<<" "; 
        cout<<x.second<<" "; 
    }
    return 0;
}
