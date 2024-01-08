#include <iostream>
using namespace std;
int maxlevel=0;
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

void left(Node*root, int level)
{
    if(root==NULL)
    {
        return;
    }
    if(maxlevel<level)
    {
        cout<<root->key<<" ";
        maxlevel=level;
    }
    left(root->left,level+1);
    left(root->right,level+1);
}

int main()
{
    Node *root= new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    left(root,1);

    return 0;
}