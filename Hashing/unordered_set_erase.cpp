#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
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
    s. erase(it);
    for(int x:s)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    s.erase(s.begin(),s.end());
    cout<<s.size();

    return 0;
}