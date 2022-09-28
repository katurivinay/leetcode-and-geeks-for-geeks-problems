
//  // Definition for a binary tree node.
//   struct TreeNode {
//       int data;
//       TreeNode *left;
//       TreeNode *right;
//       TreeNode() : val(0), left(nullptr), right(nullptr) {}
//       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//       TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//   };

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)return ans;
        queue<TreeNode*> q;
        q.push(root);
        int n = 1;
        
        while(!q.empty())
        {
            int count = 0; 
            vector<int> temp;
            for(int i = 0 ; i < n ; i++){
                TreeNode* current = q.front();
                q.pop();
                if(current->left){
                    q.push(current->left);
                    count += 1;
                }
                if(current->right){
                    q.push(current->right);
                    count+=1;
                }
                temp.push_back(current->val);
            }
            n = count;
            ans.push_back(temp);
        }
        return ans;
    }
};