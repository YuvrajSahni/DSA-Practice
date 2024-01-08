#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map <int,int> m;
    m.insert({10,200});
    m.insert({5,300});
    m.insert({20,400});
    cout<<m.size()<<" ";
    m.erase(m.find(10),m.end());
    cout<<m.size()<<" ";

    return 0;
}