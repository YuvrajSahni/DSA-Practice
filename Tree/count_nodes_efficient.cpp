#include <iostream>
#include <math.h>
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

int count(Node*root)
{
    int lh=0,rh=0;
    Node*temp=root;
    while(temp!=NULL)
    {
        lh++;
        temp=temp->left;
    }
    temp=root;
    while(temp!=NULL)
    {
        rh++;
        temp=temp->right;
    }
    if(lh==rh)
    {
        return pow(2,lh)-1;
    }
    else
    {
        return 1+count(root->left)+count(root->right);
    }
}

int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	cout<<count(root);
    
    return 0;
}