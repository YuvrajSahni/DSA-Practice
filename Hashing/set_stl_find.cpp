#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(15);
    s.insert(20);
    auto it=s.find(10);
    if(it==s.end())
    {
        cout<<"Not found\n";
    }
    else
    {
        cout<<"Found\n";
    }
    while(it!=s.end())
    {
        cout<<*it<<" ";
        it++;
    }

    return 0;
}