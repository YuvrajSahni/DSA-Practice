#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(110);
    s.insert(10);
    s.insert(20);
    if (s.count(10))
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not found";
    }

    return 0;
}