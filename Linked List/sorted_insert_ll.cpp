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

Node* insert(Node *head, int n)
{
    Node *newnode=new Node(n);
    Node *temp=head;
    if(head==NULL)
    {
        return newnode;
    }
    if(n<head->data)
    {
        newnode->next=head;
        return newnode;
    }
    while(temp->next!=NULL && temp->next->data<n)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
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
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head=insert(head,25);
    display(head);
    return 0;
}