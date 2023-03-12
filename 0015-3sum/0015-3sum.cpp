class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sol;
        sort(nums.begin(),nums.end());
        int i = 0 ;
        while( i < nums.size()){
            int target = -nums[i];
            int l = i+1,r =nums.size()-1;
            while(l < r){
                if(nums[l] + nums[r] == target){
                    int second = nums[l];
                    int third = nums[r];
                        sol.push_back({nums[l] , nums[i] , nums[r]});
                    l++;r--;
                    while(l<nums.size() && second==nums[l])l++;
                    while(l<r && third==nums[r])r--;
                }
                else if((nums[l] + nums[r]) < target){
                        l++;
                }
                else r--;
            }
            while(i < nums.size() and nums[i] == -(target))i++;
        }
        return sol;
    }
};