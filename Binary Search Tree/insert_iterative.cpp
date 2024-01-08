#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node*left;
    Node*right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

Node*insert(Node* root,int x)
{
    Node*temp=new Node(x);
    Node*parent=NULL;
    Node*curr=root;
    while(curr!=NULL)
    {
        parent=curr;
        if(curr->key>x)
        {
            curr=curr->left;
        }
        else if(curr->key<x)
        {
            curr=curr->right;
        }
        else
        {
            return root;
        }
    }
    if(parent==NULL)
    {
        return temp;
    }
    if(parent->key>x)
    {
        parent->left=temp;
    }
    else
    {
        parent->right=temp;
    }
    return root;
}

void inorder(Node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

int main()
{
    Node*root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(15);
    root->right->left=new Node(12);
    root->right->right=new Node(18);
    root=insert(root,20);
    inorder(root);
    return 0;
}