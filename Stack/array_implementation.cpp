#include <iostream>
using namespace std;

struct Mystack
{
    int *arr;
    int cap;
    int top;
    Mystack(int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }

    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"Stack is full"<<endl;
        }
        top++;
        arr[top]=x;
    }

    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        int res=arr[top];
        top--;
        return res;
    }

    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        return arr[top];
    }

    int size()
    {
        return top+1;
    }

    bool empty()
    {
        return top==-1;
    }
};

int main()
{
    Mystack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<boolalpha<<s.empty()<<endl;
    
    return 0;
}