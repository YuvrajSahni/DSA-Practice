#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node* left;
    Node* right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

void display(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->key<<" ";
        temp=temp->right;
    }
}

Node *convert(Node* root)
{
    if(root==NULL)
    {
        return root;
    }
    static Node *prev=NULL;
    Node *head=convert(root->left);
    if(prev==NULL)
    {
        head=root;
    }
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    convert(root->right);
    return head;
}

int main()
{
    Node* root=new Node(10);
    root->left=new Node(5);  
    root->right=new Node(20);  
    root->right->left=new Node(30);
    root->right->right=new Node(35);
    Node *head=convert(root);
    display(head); 

    return 0;
}