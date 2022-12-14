class Solution {
public:
    vector<vector<int>> helper(vector<int>&nums , int i){
        if(i >= nums.size()) return {{}};
        vector<vector<int>> partial_ans = helper(nums,i+1);
        vector<vector<int>> ans;
        for(vector<int> x : partial_ans){
            ans.push_back(x);
        }
        for(vector<int> x : partial_ans){
            x.push_back(nums[i]);
            ans.push_back(x);
        }
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans = helper(nums,0);
        return ans;
    }
};