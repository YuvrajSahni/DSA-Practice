#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node*left;
    Node*right;
    int lcount;
    Node(int k)
    {
        key=k;
        left=right=NULL;
        lcount=0;
    }
};

Node* insert(Node*root, int x)
{
    if(root==NULL)
    {
        return new Node(x);
    }
    if(x<root->key)
    {
        root->left=insert(root->left,x);
        root->lcount++;
    }
    else if(x>root->key)
    {
        root->right=insert(root->right,x);
    }
    return root;
}

Node* kth(Node*root, int k)
{
    if(root==NULL)
    {
        return NULL;
    }
    int count=root->lcount+1;
    if(count==k)
    {
        return root;
    }
    if(count>k)
    {
        return kth(root->left,k);
    }
    return kth(root->right,k-count);
}

int main()
{
    Node*root=NULL;
    int keys[]={20,8,22,4,12,10,14};
    for(int x:keys)
    {
        root=insert(root,x);
    }
    Node*res=kth(root,4);
    if(res==NULL)
    {
        cout<<"Not enough nodes";
    }
    else
    {
        cout<<"kth smallest element: "<<res->key;
    }

    return 0;
}