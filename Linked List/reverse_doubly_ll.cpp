#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

void display(Node*head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node *reverse(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node*temp=head;
    Node*curr=NULL;
   
    while(temp!=NULL)
    {
        curr=temp->prev;
        temp->prev=temp->next;
        temp->next=curr;
        temp=temp->prev;
    }
    head=curr->prev;
    return head;
}

int main()
{
    Node*head=new Node(10);
    Node*temp1=new Node(20);
    Node*temp2=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=reverse(head);
    display(head);
    
    return 0;
}