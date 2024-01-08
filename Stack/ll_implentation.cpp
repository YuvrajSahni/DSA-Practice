#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node*next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

struct Mystack
{
    Node*head;
    int sz;
    Mystack()
    {
        head=NULL;
        sz=0;
    }

    void push(int x)
    {
        Node *newnode=new Node(x);
        newnode->next=head;
        head=newnode;
        sz++;
    }

    int pop()
    {
        if(head==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return INT16_MAX;
        }
        Node*temp=head;
        int res=head->data;
        head=head->next;
        delete(temp);
        sz--;
        return res;
    }

    int peek()
    {
        if(head==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return INT16_MAX;
        }
        return head->data;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head==NULL;
    }

};

int main()
{
    Mystack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<boolalpha<<s.empty()<<endl;
    
    return 0;
}