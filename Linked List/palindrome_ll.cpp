#include <iostream>
#include <stack>
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

bool palindrome(Node *head)
{
    stack<char> st;
    for(Node*temp=head;temp!=NULL;temp=temp->next)
    {
        st.push(temp->data);
    }
    for(Node*temp=head;temp!=NULL;temp=temp->next)
    {
        if(st.top()!=temp->data)
        {
            return false;
        }
        st.pop();
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
    //head->next->next->next->next->next=new Node('R');
    display(head);
    cout<<endl;
    cout<<boolalpha<<palindrome(head);
    return 0;
}