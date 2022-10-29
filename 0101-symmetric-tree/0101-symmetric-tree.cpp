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
  bool same_tree(TreeNode *tree1 , TreeNode *tree2){
    if(tree1 == NULL and tree2 == NULL)return true;
    if(tree1 == NULL || tree2 == NULL)return false;
    return (tree1->val == tree2->val)&&(same_tree(tree1->left,tree2->right))&&(same_tree(tree1->right,tree2->left));
}
    bool isSymmetric(TreeNode* root) {
        TreeNode *l , *r;
        l = root->left;
        r = root->right;
        return same_tree(l,r);
    }
};