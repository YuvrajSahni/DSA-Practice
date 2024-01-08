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

void display(Node *head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int get_count(Node*head)
{
    Node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

int intersection(int d,Node*head1, Node*head2)
{
    Node*curr1=head1;
    Node*curr2=head2;
    for(int i=0;i<d;i++)
    {
        if(curr1==NULL)
        {
            return -1;
        }
        curr1=curr1->next;
    }
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1==curr2)
        {
            return curr1->data;
        }
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return -1;
}

int compare(Node*head1, Node*head2)
{
    int c1=get_count(head1);
    int c2=get_count(head2);
    int d;
    if(c1>c2)
    {
        d=c1-c2;
        return intersection(d,head1,head2);
    }
    else
    {
        d=c2-c1;
        return intersection(d,head2,head1);
    }
    
}

int main()
{
    Node* newNode; 
	Node* head1 = new Node(5); 
	Node* head2 = new Node(9); 
	newNode = new Node(8); 
	head2->next = newNode; 
	newNode = new Node(7); 
	head2->next->next = newNode; 
	newNode = new Node(10); 
	head1->next = newNode; 
	head2->next->next->next = newNode; 
	newNode = new Node(12); 
	head1->next->next = newNode;
	newNode = new Node(15); 
	head1->next->next->next = newNode;
	head1->next->next->next->next = NULL; 
	cout<<compare(head1, head2);
    return 0;
}