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

Node* remove(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node *temp=head;
    head=temp->next;
    temp->next=NULL;
    free(temp);
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
   head->next=new Node(20);
   head->next->next=new Node(30);
   head->next->next->next=new Node(40);
   head=remove(head);
    print(head);
    return 0;
}