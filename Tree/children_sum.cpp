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

bool child(Node* root)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return true;
    }
    int sum=0;
    if(root->left!=NULL)
    {
        sum+=root->left->key;
    }
    if(root->right!=NULL)
    {
        sum+=root->right->key;
    }
    return(root->key==sum && child(root->left) && child(root->right));
}

int main()
{
    Node*root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->left->left=new Node(3);
    root->left->right=new Node(5);
    cout<<boolalpha<<child(root);
    
    return 0;
}