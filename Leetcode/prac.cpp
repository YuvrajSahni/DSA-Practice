#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : value(val), left(NULL), right(NULL) {}
};


TreeNode* buildTreeFromLevelOrder(vector<int>& nodes) {
    if (nodes.empty()) return nullptr;

    TreeNode* root = new TreeNode(nodes[0]);
    queue<TreeNode*> q;
    q.push(root);

    size_t i = 1;
    while (i < nodes.size()) {
        TreeNode* current = q.front();
        q.pop();

        if (nodes[i] != -1) {
            current->left = new TreeNode(nodes[i]);
            q.push(current->left);
        }
        i++;

        if (i < nodes.size() && nodes[i] != -1) {
            current->right = new TreeNode(nodes[i]);
            q.push(current->right);
        }
        i++;
    }

    return root;
}

string findPathToNode(TreeNode* root, int n) {
    if (root == nullptr) return "";

    queue<pair<TreeNode*, string>> q;
    q.push({root, ""});

    while (!q.empty()) {
        TreeNode* current = q.front().first;
        string path = q.front().second;
        q.pop();

        if (current->value == n)
            return path;

        if (current->left)
            q.push({current->left, path + "L"});
        if (current->right)
            q.push({current->right, path + "R"});
    }

    return "Node not found";
}

int main() {
    vector<int> nodes = {10,5,15,3,7,12,18,1,4,6,8,11,13,17,19};
    int targetNode = 11;

    TreeNode* root = buildTreeFromLevelOrder(nodes);
    string path = findPathToNode(root, targetNode);

    if (path != "Node not found") {
        cout << "Path to node " << targetNode << ": " << path << endl;
    } else {
        cout << "Node " << targetNode << " not found" << endl;
    }

    // Remember to free the allocated memory for the tree nodes to avoid memory leaks
    // (Not shown here to keep the code concise)
    return 0;
}
