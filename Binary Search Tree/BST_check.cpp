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

int max_value(Node* root)
{
    if(root==NULL)
    {
        return INT16_MIN;
    }
    int res=root->key;
    int lres=max_value(root->left);
    int rres=max_value(root->right);
    if(lres>res)
    {
        res=lres;
    }
    if(rres>res)
    {
        res=rres;
    }
    return res;
}

int min_value(Node* root)
{
    if(root==NULL)
    {
        return INT16_MAX;
    }
    int res=root->key;
    int lres=min_value(root->left);
    int rres=min_value(root->right);
    if(lres<res)
    {
        res=lres;
    }
    if(rres<res)
    {
        res=rres;
    }
    return res;
}

int isBST(Node* root)
{
    if(root==NULL)
    {
        return 1;
    }
    if(root->left!=NULL && max_value(root->left) > root->key)
    {
        return 0;
    }
    if(root->right!=NULL && min_value(root->right) < root->key)
    {
        return 0;
    }
    if(!isBST(root->left) || !isBST(root->right))
    {
        return 0;
    }
    return 1;
}

int main()
{
    Node*root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(20);
    root->right->left=new Node(13);
    root->right->right=new Node(24);
    if(isBST(root)){
        cout<<"Is BST";
    }
    else{
        cout<<"Not a BST";
    }

    return 0;
}