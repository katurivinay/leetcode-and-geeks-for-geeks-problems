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
    int helper(TreeNode* root)
    {
        if(root == NULL)return 0;
        if(root->left == NULL && root-> right == NULL)return 1;
        int leftans  = helper(root->left);
        int rightans = helper(root->right);
        return 1 + max(leftans,rightans);
    }
    int maxDepth(TreeNode* root) {
        return helper(root);
    }
};