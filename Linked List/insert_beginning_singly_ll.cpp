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
    Node *newnode=new Node(n);
    newnode->next=head;
    return newnode;
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
   int n;
   int data;
//    head=insert(head,30);
//    head=insert(head,20);
//    head=insert(head,10);
//    head=insert(head,5);
    cout<<"Enter how many nodes you want to insert: ";
    cin>>n;
    while(n!=0)
    {
        printf("Enter data: ");
        cin>>data;
        head=insert(head,data);
        n--;
    }
    print(head);
    return 0;
}