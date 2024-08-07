#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

void display(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* merge(Node*a,Node*b)
{
    if(a==NULL)
    {
        return b;
    }
    if(b==NULL)
    {
        return a;
    }
    Node*head=NULL;
    Node*tail=NULL;
    if(a->data<=b->data)
    {
        head=tail=a;
        a=a->next;
    }
    else
    {
        head=tail=b;
        b=b->next;
    }

    while(a!=NULL && b!=NULL)
    {
        if(a->data<b->data)
        {
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else
        {
            tail->next=b;
            tail=b;
            b=b->next;
        }
    }

    if(a==NULL)
    {
        tail->next=b;
    }
    else
    {
        tail->next=a;
    }
    return head;
}

int main()
{
    Node*a=new Node(10);
    a->next=new Node(20);
    a->next->next=new Node(30);
    a->next->next->next=new Node(40);

    Node*b=new Node(5);
    b->next=new Node(15);
    b->next->next=new Node(17);
    b->next->next->next=new Node(18);
    b->next->next->next->next=new Node(35);
    display(merge(a,b));

    return 0;
}