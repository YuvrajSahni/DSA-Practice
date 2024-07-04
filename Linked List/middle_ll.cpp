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
    int count=0;
    Node*temp=head;
    Node*curr=head;
    if(head==NULL)
    {
        return;
    }
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    count/=2;
    while(count>0)
    {
        curr=curr->next;
        count--;
    }
    cout<<curr->data;
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
    head->next->next->next->next->next=new Node(35);

    middle(head);

    return 0;
}