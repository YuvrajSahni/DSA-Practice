#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(110);
    s.insert(10);
    s.insert(20);
    if(s.find(10)==s.end())
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found "<<*(s.find(10));
    }

    return 0;
}