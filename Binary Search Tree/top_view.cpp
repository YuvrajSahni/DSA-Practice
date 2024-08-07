#include <iostream>
#include <map>
#include <queue>
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

void top(Node* root)
{
    map<int,int> mp;
    queue<pair<Node*, int>> q;
    q.push({root,0});
    while(q.empty()==false)
    {
        auto p=q.front();
        Node*curr=p.first;
        int hd=p.second;
        if(mp.find(hd)==mp.end())
        {
            mp[hd]=curr->key;
        }
        q.pop();
        if(curr->left!=NULL)
        {
            q.push({curr->left,hd-1});
        }
        if(curr->right!=NULL)
        {
            q.push({curr->right,hd+1});
        }
    }
    for(auto x:mp)
    {
        cout<<x.second<<" ";
    }
}

int main()
{
    Node*root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(50);
    root->left->left=new Node(30);
    root->left->right=new Node(40);
    root->right->left=new Node(60);
    root->right->right=new Node(70);
    top(root);

    return 0;
}