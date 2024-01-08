#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverse(queue<int> &q)
{
    stack<int> s;
    while(q.empty()==false)
    {
        s.push(q.front());
        q.pop();
    }

    while(s.empty()==false)
    {
        q.push(s.top());
        s.pop();
    }
    while(q.empty()==false)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main()
{
    queue<int> q1;
    q1.push(10);
    q1.push(5);
    q1.push(15);
    q1.push(20);
    reverse(q1);
    return 0;
}