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
        right=left=NULL;
    }
};

void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

int pre_index=0;
Node *construct(int in[], int pre[], int is, int ie)
{
    if(is>ie)
    {
        return NULL;
    }
    Node *root=new Node(pre[pre_index++]);
    int in_index;
    for(int i=is;i<=ie;i++)
    {
        if(in[i]==root->key)
        {
            in_index=i;
            break;
        }
    }
    root->left=construct(in,pre,is,in_index-1);
    root->right=construct(in,pre,in_index+1,ie);
    return root;
}

int main()
{
    int in[]={20,10,40,30,50};
    int pre[]={10,20,30,40,50};
    Node *root=construct(in,pre,0,4);
    inorder(root);
    return 0;
}