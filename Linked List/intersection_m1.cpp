#include <iostream>
#include <unordered_set>
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

int intersection(Node*head1, Node*head2)
{
    unordered_set<Node *> s;
    Node *temp=head1;
    while(temp!=NULL)
    {
        s.insert(temp);
        temp=temp->next;
    }
    temp=head2;
    while(temp!=NULL)
    {
        if(s.find(temp)!=s.end())
        {
            return temp->data;
        }
        temp=temp->next;
    }
    return -1;
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
	cout <<intersection(head1, head2);
    return 0;
}