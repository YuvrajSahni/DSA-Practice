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
    Node*temp=head;
    while(temp!=NULL && temp->next!=NULL)
    {
        swap(temp->data,temp->next->data);
        temp=temp->next->next;
    }
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