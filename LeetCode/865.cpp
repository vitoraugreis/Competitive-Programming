/*
---------------------------------------------------------------
    Daily Question - 01/09/2026
    865. Smallest Subtree with all the Deepest Nodes
---------------------------------------------------------------
*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include <iostream>
using namespace std;

class Solution {
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        int left = getDepth(root->left);
        int right = getDepth(root->right);

        if (left == right) return root;
        else if (left > right) return subtreeWithAllDeepest(root->left);
        else return subtreeWithAllDeepest(root->right);
    }

    int getDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = getDepth(root->left);
        int right = getDepth(root->right);

        if (left > right) return 1+left;
        else return 1+right;
    }
};