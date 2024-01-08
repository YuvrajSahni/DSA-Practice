#include <iostream>
#include <unordered_map>
using namespace std;

struct Node
{
    int data;
    Node*next,*random;
    Node(int x)
    {
        data=x;
        next=NULL;
        random=NULL;
    }
};

void display(Node*start)
{
    Node*ptr=start;
    while(ptr)
    {
        cout<<"Data= "<<ptr->data<<", Random= "<<ptr->random->data<<endl;
        ptr=ptr->next;
    }
}

Node*clone(Node*head)
{
    unordered_map<Node*,Node*> hm;
    for(Node*temp=head;temp!=NULL;temp=temp->next)
    {
        hm[temp]=new Node(temp->data);
    }
    for(Node*temp=head;temp!=NULL;temp=temp->next)
    {
        Node*clone_temp=hm[temp];
        clone_temp->next=hm[temp->next];
        clone_temp->random=hm[temp->random];
    }
    Node*head2=hm[head];
    return head2;
}

int main()
{
    Node*head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=new Node(20);

    head->random=head->next->next;
    head->next->random=head->next->next->next;
    head->next->next->random=head;
    head->next->next->next->random=head->next->next;
    head->next->next->next->next->random=head->next->next->next;
    cout<<"Original List:\n";
    display(head);
    cout<<"\nCloned List:\n";
    Node*cloned_list=clone(head);
    display(cloned_list);
    
    return 0;
}