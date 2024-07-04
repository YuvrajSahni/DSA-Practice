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

Node* insert(Node *head, int n)
{
    Node*temp=head;
    Node *newnode=new Node(n);
    if(head==NULL)
    {
        return newnode;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}

void print(Node *head)
{
    Node*curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
   Node *head=NULL;
   head=insert(head,10);
   head=insert(head,20);
   head=insert(head,30);
   head=insert(head,40);
    print(head);
    return 0;
}