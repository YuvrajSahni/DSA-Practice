#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node*next;
    Node(int n)
    {
        data=n;
        next=NULL;
    }
};

void display(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node*reverse(Node *head)
{
    Node*temp=head;
    Node*prev=NULL;
    while(temp!=NULL)
    {
        Node*next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    return prev;
}

int main()
{
    Node *head= new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head=reverse(head);
    display(head);
    
    return 0;
}