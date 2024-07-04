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

void display(Node* head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void remove(Node*ptr)
{
    Node*temp=ptr->next;
    ptr->data=temp->data;
    ptr->next=temp->next;
    delete(temp);
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    Node*ptr=new Node(30);
    head->next->next=ptr;
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    remove(ptr);
    display(head);
    
    return 0;
}