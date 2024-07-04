#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq={10,15,30,5,12};
    dq.push_front(5);
    dq.push_back(50);
    for(auto x:dq)
    {
        cout<<x<<" ";
    }
    cout<<endl<<dq.front()<<" "<<dq.back()<<endl;
    auto it=dq.begin();
    it++;
    dq.insert(it,20);
    dq.erase(it+2);
    for(auto x:dq)
    {
        cout<<x<<" ";
    }
    dq.pop_front();
    dq.pop_back();
    cout<<endl<<dq.size();
    
    return 0;
}