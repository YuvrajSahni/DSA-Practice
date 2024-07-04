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
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void remove_duplicate(Node *head)
{
    Node*temp=head;
    while(temp!=NULL && temp->next!=NULL)
    {        
        if(temp->data==temp->next->data)
        {
            Node *curr=temp->next;
            temp->next=temp->next->next;
            delete curr;
        }
        else
        {
            temp=temp->next;
        }
    }
}

int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(20);
    head->next->next->next=new Node(30);
    head->next->next->next->next=new Node(30);
    head->next->next->next->next->next=new Node(30);
    head->next->next->next->next->next->next=new Node(40);
    remove_duplicate(head);
    display(head);
   
    return 0;
}