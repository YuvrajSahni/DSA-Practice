#include <iostream>
#include <unordered_set>
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

bool pair_sum(Node*root, int target, unordered_set<int> &s)
{
    if(root==NULL)
    {
        return false;
    }
    if(pair_sum(root->left,target,s)==true)
    {
        return true;
    }
    if(s.find(target-root->key)!=s.end())
    {
        return true;
    }
    else
    {
        s.insert(root->key);
    }
    return pair_sum(root->right,target,s);
}

int main()
{
    Node*root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(20);
    root->right->left=new Node(11);
    root->right->right=new Node(30);
    root->left->left=new Node(4);
    root->left->right=new Node(9);
    root->right->right->left=new Node(25);
    unordered_set<int> s;
    cout<<boolalpha<<pair_sum(root,33,s);

    return 0;
}