#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node*next;
    Node*prev;
    Node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

void display(Node*head)
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

Node *insert(Node*head, int n)
{
    Node *newnode=new Node(n);
    if(head==NULL)
    {
        newnode->next=newnode;
        newnode->prev=newnode;
        return newnode;
    }
    Node*temp=head;
    newnode->next=head;
    newnode->prev=head->prev;
    head->prev->next=newnode;
    head->prev=newnode;
    return newnode;
}

int main()
{
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(15);
    Node *temp3=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->prev=temp2;
    temp3->next=head;
    head->prev=temp3;
    head=insert(head,5);
    display(head);
    return 0;
}