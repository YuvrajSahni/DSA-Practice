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

Node* insert(Node *head, int x, int n)
{
    Node*temp=head;
    Node *newnode=new Node(n);
    int count=1;
    if(x==1)
    {
        newnode->next=head;
        return newnode;
    }
    // Node*prev=temp;
    while(count!=x-1)
    {
        // prev=temp;
        temp=temp->next;
        count++;
    }
    // prev->next=newnode;
    // newnode->next=temp;
    newnode->next=temp->next;
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
   Node *head=new Node(10);
   head->next=new Node(30);
   head->next->next=new Node(50);
   head->next->next->next=new Node(70);
   head=insert(head,2,20);
    print(head);
    return 0;
}