#include <iostream>
#include <stack>

using namespace std;

// int get_min(stack<int> s)
// {
//     int res=INT16_MAX;
//     while(s.empty()==false)
//     {
//         res=min(res,s.top());
//         s.pop();
//     }
//     return res;
// }

struct Mystack
{
    stack<int> ms;
    stack<int> as;

    void push(int x)
    {
        if(ms.empty())
        {
            ms.push(x);
            as.push(x);
            return;
        }
        ms.push(x);
        if(as.top()>=ms.top())
        {
            as.push(x);
        }
    }

    void pop()
    {
        if(as.top()==ms.top())
        {
            as.pop();
        }
        ms.pop();
    }

    int top()
    {
        return ms.top();
    }

    int get_min()
    {
        return as.top();
    }
};

int main()
{
    // stack<int> s;
    // s.push(20);
    // s.push(10);
    // cout<<get_min(s)<<" ";
    // s.push(5);
    // cout<<get_min(s)<<" ";
    // s.pop();
    // cout<<get_min(s)<<" ";
    // s.pop();
    // cout<<get_min(s)<<" ";
    Mystack s;
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(1);
    s.pop();
    cout<<s.get_min();

    return 0;
}