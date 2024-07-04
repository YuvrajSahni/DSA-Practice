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

int prevv=INT16_MIN;
bool isBST(Node* root)
{
    if(root==NULL)
    {
        return true;
    }
    if(isBST(root->left)==false)
    {
        return false;
    }
    if(root->key<=prevv)
    {
        return false;
    }
    prevv=root->key;
    return isBST(root->right);
}

int main()
{
    Node*root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(30);
    root->right->left=new Node(18);
    root->right->right=new Node(35);
    cout<<boolalpha<<isBST(root);

    return 0;
}