class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int l = 0 , r = 0 , n = nums.size() , ans = 0 , zer = 0;
        
        while(r < n){
            
            if(nums[r] == 0)
            {
                zer+=1;
            }
            while(zer > k){
                if(nums[l] == 0)zer--;
                l++;
            }
            ans = max(ans , r - l + 1);
            r++;
        }
        return ans;
    }
};