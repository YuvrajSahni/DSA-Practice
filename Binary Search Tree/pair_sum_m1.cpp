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

void inorder(Node*root, vector<int> &arr)
{
    if(root!=NULL)
    {
        inorder(root->left,arr);
        arr.push_back(root->key);
        inorder(root->right,arr);
    }
}

bool pair_sum(Node*root, int target)
{
    vector<int> a2;
    inorder(root,a2);
    int start=0;
    int end=a2.size()-1;
    while(start<end)
    {
        if(a2[start]+a2[end]==target)
        {
            cout<<"Pair found: "<<a2[start]<<" + "<<a2[end]<<" = "<<target<<endl;
            return true;
        }
        if(a2[start]+a2[end]>target)
        {
            end--;
        }
        if(a2[start]+a2[end]<target)
        {
            start++;
        }
    }
    cout<<"No such values found";
    return false;
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
    cout<<boolalpha<<pair_sum(root,33);

    return 0;
}