#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    auto it=s.upper_bound(25);
    if(it!=s.end())
    {
        cout<<*it<<" ";
    }
    else
    {
        cout<<"Given element is greater than the largest";
    }

    return 0;
}