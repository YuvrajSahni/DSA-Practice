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

void inorder(Node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

Node*prevv=NULL,*first=NULL,*second=NULL;
void fix_BST(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    fix_BST(root->left);
    if(prevv!=NULL && root->key<prevv->key)
    {
        if(first==NULL)
        {
            first=prevv;
        }
        second=root;
    }
    prevv=root;
    fix_BST(root->right);
}

int main()
{
    Node*root=new Node(18);
    root->left=new Node(60);
    root->right=new Node(70);
    root->left->left=new Node(4);
    root->right->left=new Node(8);
    root->right->right=new Node(80);
    fix_BST(root);
    int temp=first->key;
    first->key=second->key;
    second->key=temp;
    inorder(root);

    return 0;
}