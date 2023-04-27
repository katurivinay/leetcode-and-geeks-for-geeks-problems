class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size() , 0);
        int l = 0,r=nums.size()-1;
        int i = r;
        
        while(l <= r){
            if(nums[l] < 0){
                nums[l] = -nums[l];
            }
            if(nums[l] <= nums[r]){
                ans[i] = nums[r] * nums[r];
                r--;
            }
            else{
                ans[i] = nums[l]*nums[l];
                l++;
            }
            i -= 1;
        }
        return ans;
    }
};