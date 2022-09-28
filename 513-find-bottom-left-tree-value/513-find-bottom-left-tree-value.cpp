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
void helper(vector<int> &ans,TreeNode* root,int level){
        if(root == NULL)return ;
        if(ans.size() == level)ans.push_back(root->val);
        helper(ans,root->left,level+1);
        helper(ans,root->right,level+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        vector<int> ans;
        helper(ans,root,0);
        for(auto i : ans)cout<<i<<" ";
        return ans[ans.size()-1];
    }
};