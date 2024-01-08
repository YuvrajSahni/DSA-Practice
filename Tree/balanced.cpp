#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node* left;
    Node* right;
    Node(int k)
    {
        k=key;
        left=right=NULL;
    }
};

int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root->left),height(root->right))+1;
    }
}

bool balance(Node*root)
{
    if(root==NULL)
    {
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return (abs(lh-rh)<=1 && balance(root->left) && balance(root->right));
}

int main()
{
    Node*root=new Node(18);
    root->left=new Node(4);
    root->right=new Node(20);
    root->right->left=new Node(13);
    root->right->right=new Node(70);
    // root->right->right->right=new Node(80);

    cout<<boolalpha<<balance(root);
    
    return 0;
}