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
    int countNodes(TreeNode* root) {
        int ans = 0;
        stack<TreeNode*> st;
        st.push(root);
        if(!root)return 0;
        while(!st.empty()){
            TreeNode * curr = st.top();
            st.pop();
            if(curr->left){
               st.push(curr->left); 
            }
            if(curr->right){
               st.push(curr->right); 
            }
            ans += 1;
        }
        return ans;
    }
};