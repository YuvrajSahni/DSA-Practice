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

void middle(Node *head)
{
    Node*slow=head;
    Node*fast=head;
    if(head==NULL)
    {
        return;
    }
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}

void display(Node *head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=new Node(25);
    // head->next->next->next->next->next=new Node(35);

    middle(head);

    return 0;
}