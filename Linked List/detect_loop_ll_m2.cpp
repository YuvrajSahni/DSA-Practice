#include <iostream>
#include <unordered_set>
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
    unordered_set<Node*> s;
    for(Node*curr=head;curr!=NULL;curr=curr->next)
    {
        if(s.find(curr)!=s.end())
        {
            return true;
        }
        s.insert(curr);
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