/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* newRoot = nullptr;
    TreeNode* prev = nullptr;

    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return newRoot;
    }

    void inorder(TreeNode* node) {
        if (!node) return;

        inorder(node->left);

        node->left = nullptr;

        if (!newRoot) {
            newRoot = node;
        }

        if (prev) {
            prev->right = node;
        }

        prev = node;

        inorder(node->right);
    }
};