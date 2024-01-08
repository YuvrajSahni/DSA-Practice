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

Node*reverse(Node *head, int k)
{
    Node*temp=head;
    Node*prev=NULL,*next=NULL;
    int count=0;
    while(temp!=NULL && count<k)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
        count++;
    }
    if(next!=NULL)
    {
        Node*rest_head=reverse(next,k);
        head->next=rest_head;
    }
    return prev;
}

int main()
{
    Node *head= new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    head->next->next->next->next->next->next=new Node(70);
    head=reverse(head,3);
    display(head);
    
    return 0;
}