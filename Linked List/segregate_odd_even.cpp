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

void display(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* segregate(Node*head)
{
    Node *eS=NULL,*eE=NULL,*oS=NULL,*oE=NULL;
    for(Node*temp=head;temp!=NULL;temp=temp->next)
    {
        int x=temp->data;
        if(x%2==0)
        {
            if(eS==NULL)
            {
                eS=temp;
                eE=eS;
            }
            else
            {
                eE->next=temp;
                eE=eE->next;
            }
        }
        else
        {
            if(oS==NULL)
            {
                oS=temp;
                oE=oS;
            }
            else
            {
                 oE->next=temp;
                 oE=oE->next;                                 
            }
        }
    }
    if(oS==NULL||eS==NULL)
    {
        return head;
    }
    eE->next=oS;
    oE->next=NULL;
    return eS;
}

int main()
{
    Node*head=new Node(17);
    head->next=new Node(15);
    head->next->next=new Node(8);
    head->next->next->next=new Node(12);
    head->next->next->next->next=new Node(10);
    head->next->next->next->next->next=new Node(5);
    head->next->next->next->next->next->next=new Node(21);
    head=segregate(head);
    display(head);
    
    return 0;
}
