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

int main()
{
    // Node *head= new Node(10);
    // head->next=new Node(20);
    // head->next->prev=head;
    // head->next->next=new Node(30);
    // head->next->next->prev=head->next;
    Node*head=new Node(10);
    Node*temp1=new Node(20);
    Node*temp2=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    display(head);
    
    return 0;
}