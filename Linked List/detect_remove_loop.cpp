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

void loop(Node*head)
{
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    if(slow!=fast)
    {
        return;
    }
    slow=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }    
    fast->next=NULL;
}

int main()
{
    Node*head=new Node(10);
    head->next=new Node(12);
    head->next->next=new Node(15);
    head->next->next->next=new Node(20);
    head->next->next->next->next=new Node(25);
    head->next->next->next->next->next=head->next;
    loop(head);
    return 0;
}