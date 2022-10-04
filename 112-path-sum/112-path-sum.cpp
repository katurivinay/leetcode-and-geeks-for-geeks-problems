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
    bool helper(TreeNode* root, int targetSum,int sum){
        if(root == NULL)return false;
        if(root->left == NULL and root->right == NULL){
            if(sum + root->val == targetSum)return true;
        }
        bool lt = helper(root->left,targetSum,sum + root->val);
        bool rt = helper(root->right,targetSum,sum + root->val);
        if(lt || rt)return true;
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL)return false;
       return helper( root, targetSum,0);
    }
};