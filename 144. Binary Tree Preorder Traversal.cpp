class Solution {
public:
    void preorder(TreeNode* root, vector<int>& res) {
        if (!root) return;

        res.push_back(root->val);   // Root
        preorder(root->left, res);  // Left
        preorder(root->right, res); // Right
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorder(root, res);
        return res;
    }
};