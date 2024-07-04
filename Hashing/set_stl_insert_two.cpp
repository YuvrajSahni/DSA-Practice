#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int,greater<int>> s;
    s.insert(110);
    s.insert(10);
    s.insert(20);
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}