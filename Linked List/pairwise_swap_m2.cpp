#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node*next=NULL;
    Node(int x)
    {
        data=x;
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

Node* p_swap(Node*head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* temp=head->next->next;
    Node*prev=head;
    head=head->next;
    head->next=prev;
    while(temp!=NULL && temp->next!=NULL)
    {
        prev->next=temp->next;
        prev=temp;
        Node*next=temp->next->next;
        temp->next->next=temp;
        temp=next;
    }
    prev->next=temp;
    return head;
}

int main()
{
    Node*head =new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    head->next->next->next->next->next=new Node(6);
    head=p_swap(head);
    display(head);

    return 0;
}