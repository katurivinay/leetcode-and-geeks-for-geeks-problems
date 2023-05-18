class Solution {
public:
    void dfs(vector<int> &nums , int ind , int n , vector<int>& temp ,vector<vector<int>> &v){
        v.push_back(temp);
        if(ind >= n){
            return;
        }
        for(int i = ind ; i < n ; i++){
            if(i > ind and nums[i] == nums[i-1])continue;
            temp.push_back(nums[i]);
            dfs(nums , i+1 , n, temp , v);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<vector<int>> v;
        vector<int> temp;
        dfs(nums , 0 , nums.size() , temp , v);
        return v;
    }
};