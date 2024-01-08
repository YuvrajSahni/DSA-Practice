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

bool isBST(Node* root, int min, int max)
{
    if(root==NULL)
    {
        return true;
    }
    return (root->key>min && root->key<max && isBST(root->left,min,root->key) && isBST(root->right,root->key,max));
}

int main()
{
    Node*root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(20);
    root->right->left=new Node(13);
    root->right->right=new Node(24);
    cout<<boolalpha<<isBST(root,INT16_MIN,INT16_MAX);

    return 0;
}