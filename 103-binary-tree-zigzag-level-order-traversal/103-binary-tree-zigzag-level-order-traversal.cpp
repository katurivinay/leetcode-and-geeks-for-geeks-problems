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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);
        if(root == NULL)return ans;
        bool g = true;
        while(!q.empty()){
            int n = q.size();
            
            vector<int> temp;
            for(int i = 0 ; i < n ; i++){
                TreeNode * current = q.front();
                q.pop();
                if(current->left){
                    q.push(current->left);
                }
                if(current -> right){
                    q.push(current->right);
                }
                temp.push_back(current->val);
            }
            if(g){
                g = false;
                ans.push_back(temp);
            }
            else{
                reverse(temp.begin(),temp.end());
                //for(int i = 0 ; i < temp.size() ; i++)cout<<temp[i]<<" ";
                ans.push_back(temp);
                g = true;
            }
        }
        return ans;
    }
};