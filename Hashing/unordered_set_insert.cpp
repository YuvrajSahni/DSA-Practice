#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(110);
    s.insert(10);
    s.insert(20);
    for(int x:s)
    {
        cout<<x<<" ";
    }

    return 0;
}