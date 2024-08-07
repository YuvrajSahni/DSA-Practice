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

void display(Node *head)
{
    Node*temp=head;
    if(head==NULL)
    {
        return;
    }
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}

Node* remove(Node *head)
{
    Node*temp=head;
    // Node*temp1=head;

    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=head->next;
    delete head;
    return (temp->next);
}

int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    head=remove(head);
    display(head);
   
    return 0;
}