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

int search(Node *head, int n)
{
    Node*temp=head;
    int count=1;
    while(temp!=NULL)
    {
        if(temp->data==n)
        {
            return count;
        }
        else
        {
            count++;
            temp=temp->next;
        }
    }
    return -1;
}

int main()
{
   Node *head=new Node(10);
   head->next=new Node(20);
   head->next->next=new Node(30);
   head->next->next->next=new Node(40);
   cout<<search(head,20);
    return 0;
}