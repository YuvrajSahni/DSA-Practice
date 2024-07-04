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

Node* insert(Node *head, int n)
{
    Node *newnode=new Node(n);
    Node*temp=head;
    if(head==NULL)
    {
        newnode->next=newnode;
        return newnode;
    }
    newnode->next=head->next;
    head->next=newnode;
    int t=head->data;
    head->data=newnode->data;
    newnode->data=t;
    return head;
}

int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    head=insert(head,5);
    display(head);
   
    return 0;
}