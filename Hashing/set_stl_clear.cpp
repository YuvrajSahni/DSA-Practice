#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(110);
    s.insert(10);
    s.insert(20);
    s.clear();
    cout<<s.size();

    return 0;
}