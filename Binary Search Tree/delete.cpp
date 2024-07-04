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

Node *successor(Node* curr)
{
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}

Node *del_node(Node*root,int x)
{
    if(root==NULL)
    {
        return root;
    }
    if(root->key>x)
    {
        root->left=del_node(root->left,x);
    }
    else if(root->key<x)
    {
        root->right=del_node(root->right,x);
    }
    else
    {
        if(root->left==NULL)
        {
            Node*temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            Node*temp=root->left;
            delete root;
            return temp;
        }
        else
        {
            Node*succ=successor(root);
            root->key=succ->key;
            root->right=del_node(root->right,succ->key);
        }
    }
    return root;
}

void inorder(Node*root)
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
    Node*root=new Node(50);
    root->left=new Node(30);
    root->right=new Node(70);
    root->right->left=new Node(60);
    root->right->right=new Node(80);
    root->left->left=new Node(20);
    root->left->right=new Node(40);
    root=del_node(root,40);
    inorder(root);
    cout<<endl;
    root=del_node(root,30);
    inorder(root);
    cout<<endl;
    root=del_node(root,50);
    inorder(root);

    return 0;
}