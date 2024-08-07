#include <iostream>
#include <queue>
using namespace std;

struct stack
{
    queue<int> q1,q2;
    int curr_size;

    stack()
    {
        curr_size=0;
    }

    void push(int x)
    {
        curr_size++;
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q=q1;
        q1=q2;
        q2=q;
    }

    void pop()
    {
        if(q1.empty())
        {
            return;
        }
        return q1.pop();
        curr_size--;
    }

    int top()
    {
        if(q1.empty())
        {
            return -1;
        }
        return q1.front();
    }

    int size()
    {
        return curr_size;
    }
};


int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.push(40);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}