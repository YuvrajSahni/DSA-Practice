#include <iostream>
#include <map>
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

void sumR(Node*root,int hd,map<int,int> &mp)
{
    if(root==NULL)
    {
        return;
    }
    sumR(root->left,hd-1,mp);
    mp[hd]+=root->key;
    sumR(root->right,hd+1,mp);
}

void vsum(Node*root)
{
    map<int,int> m;
    sumR(root,0,m);
    for(auto sum: m)
    {
        cout<<sum.second<<" ";
    }
}

int main()
{
    Node*root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(50);
    root->left->left=new Node(30);
    root->left->right=new Node(40);
    vsum(root);

    return 0;
}