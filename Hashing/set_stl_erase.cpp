#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(7);
    s.erase(5);
    for(int x:s)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    auto it = s.find(10);
    s. erase(it,s.end());
    for(int x:s)
    {
        cout<<x<<" ";
    }

    return 0;
}