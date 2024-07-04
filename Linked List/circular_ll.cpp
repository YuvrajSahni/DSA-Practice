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
    if(head==NULL)
    {
        return;
    }
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}

int main()
{
    // Node *head=new Node(10);
    // Node *temp1=new Node(20);
    // Node *temp2=new Node(30);
    // Node *temp3=new Node(40);
    // head->next=temp1;
    // temp1->next=temp2;
    // temp2->next=temp3;
    // temp3->next=head;
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    display(head);
   
    return 0;
}