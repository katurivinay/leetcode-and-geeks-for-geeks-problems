class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0 ; i < n-1 ; i++){
            if(nums[i] == nums[i+1]){
                nums[i] = 2*nums[i];
                nums[i+1] *= 0;
            }
        }
        for(int i = n-1 ; i  >=0 ; i--){
            if(nums[i] == 0){
                ans.push_back(0);
            }
            else{
                ans.insert(ans.begin(),nums[i]);
            }
        }
        return ans;
    }
};