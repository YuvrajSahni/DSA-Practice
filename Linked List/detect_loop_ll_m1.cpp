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

void display(Node* head)
{
    Node*temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

bool loop(Node*head)
{
    Node *temp=new Node(0);
    Node*curr=head;
    while(curr!=NULL)
    {
        if(curr->next==NULL)
        {
            return false;
        }
        if(curr->next==temp)
        {
            return true;
        }
        Node*curr_next=curr->next;
        curr->next=temp;
        curr=curr_next;
    }
    return false;
}

int main()
{
    Node*head=new Node(10);
    head->next=new Node(15);
    head->next->next=new Node(12);
    head->next->next->next=new Node(20);
    head->next->next->next->next=head->next;
    cout<<boolalpha<<loop(head);
       
    return 0;
}