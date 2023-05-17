class Solution {
public:
    void dfs(vector<int>& candidates , int n , int i , vector<vector<int>> &ans , vector<int>& temp , int &sum , int target){
        if(i >= n){
            if(sum == target)
                ans.push_back(temp);
            return ;
        }
        temp.push_back(candidates[i]);
        sum += candidates[i];
        if(sum <= target)
          dfs(candidates , n , i , ans , temp , sum , target);
        temp.pop_back();
        sum -= candidates[i];
        dfs(candidates , n , i+1 , ans, temp , sum , target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = candidates.size() ;
        int sum = 0;
        dfs(candidates , n , 0 , ans , temp , sum , target);
        return ans;
    }
};