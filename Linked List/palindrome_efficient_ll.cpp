#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    char data;
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

Node*reverse(Node *head)
{
    vector<int> arr;
    for(Node*temp=head;temp!=NULL;temp=temp->next)
    {
        arr.push_back(temp->data);
    }

    for(Node *temp=head;temp!=NULL;temp=temp->next)
    {
        temp->data=arr.back();
        arr.pop_back();
    }

    return head;
}

bool palindrome(Node *head)
{
    if(head==NULL)
    {
        return true;
    }    
    Node*slow=head;
    Node*fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node*rev=reverse(slow->next);
    Node*temp=head;
    while(rev!=NULL)
    {
        if(rev->data!=temp->data)
        {
            return false;
        }
        rev=rev->next;
        temp=temp->next;
    }
    return true;
}

int main()
{
    Node*head=new Node('R');
    head->next=new Node('A');
    head->next->next=new Node('D');
    head->next->next->next=new Node('A');
    head->next->next->next->next=new Node('R');
    display(head);
    cout<<endl;
    cout<<boolalpha<<palindrome(head);
    return 0;
}