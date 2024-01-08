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

void last(Node*head, int x)
{
    int count=0;
    Node *first=head;
    Node *second=head;
    while(x>0)
    {
        first=first->next;
        x--;
    }
    while(first!=NULL)
    {
        first=first->next;
        second=second->next;
    }
    cout<<second->data;
}

int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    last(head,2);
    return 0;
}