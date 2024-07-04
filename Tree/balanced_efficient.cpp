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

int balance(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=balance(root->left);
    if(lh==-1)
    {
        return -1;
    }
    int rh=balance(root->right);
    if(rh==-1)
    {
        return -1;
    }
    if(abs(lh-rh)>1)
    {
        return -1;
    }
    else
    {
        return max(lh,rh)+1;
    }
    
}

int main()
{
    Node*root=new Node(18);
    root->left=new Node(4);
    root->right=new Node(20);
    root->right->left=new Node(13);
    root->right->right=new Node(70);
    // root->right->right->right=new Node(80);
    // root->right->right->right->right=new Node(80);

    if(balance(root)!=-1)
    {
        cout<<"Balanced";
    }
    else
    {
        cout<<"Not Balanced";
    }
    
    return 0;
}