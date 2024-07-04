#include <iostream>
#include <vector>

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

bool findpath(Node *root, vector<Node*> &p,int n)
{
    if(root==NULL)
    {
        return false;
    }
    p.push_back(root);
    if(root->key==n)
    {
        return true;
    }
    if(findpath(root->left,p,n) || findpath(root->right,p,n))
    {
        return true;
    }
    p.pop_back();
    return false;
}

Node* lca(Node*root, int n1, int n2)
{
    vector<Node*> path1,path2;
    if(findpath(root,path1,n1)==false || findpath(root,path2,n2)==false)
    {
        return NULL;
    }
    for(int i=0;i<path1.size()-1 && path2.size()-1;i++)
    {
        if(path1[i+1]!=path2[i+1])
        {
            return path1[i];
        }
    }
    return NULL;
}

int main()
{
    Node *root=new Node(10);
	root->left=new Node(50);
	root->right=new Node(60);
	root->left->left=new Node(70);
	root->left->right=new Node(20);
	root->left->left->left=new Node(40);
	root->left->right->left=new Node(90);
	root->left->right->right=new Node(80);
	root->left->right->left->left=new Node(30);
    Node*ans=lca(root,30,80);
    cout<<"LCA: "<<ans->key;
    return 0;
}