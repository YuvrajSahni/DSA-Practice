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

int count=0;
void kth(Node*root,int k)
{
    if(root!=NULL)
    {
        kth(root->left,k);
        count++;
        if(count==k)
        {
            cout<<root->key;
            return;
        }
        kth(root->right,k);
    }
}

int main()
{
    Node*root=new Node(50);
    root->left=new Node(20);
    root->right=new Node(100);
    root->left->left=new Node(10);
    //root->left->right=new Node(40);
    root->right->left=new Node(70);
    root->right->right=new Node(120);
    root->right->left->left=new Node(60);
    root->right->left->left->left=new Node(55);
    kth(root,3);

    return 0;
}