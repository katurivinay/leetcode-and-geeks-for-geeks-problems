
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        for(int i = 0  ; i < n ; i++){
            
            for(int j = i+1; j < n ; j++){
                int t = j + 1,r = n-1;
                 long long rem = (long long)target - (long long)nums[i] - (long long)nums[j];
                while(t < r){
                    if(nums[t] + nums[r] == rem){
                        int thr = nums[t];
                        int frt = nums[r];
                        ans.push_back({nums[i],nums[j],thr,frt});
                        ++t;
                        r--;
                        while (t < r && nums[t-1] == nums[t]) ++t;
                    }
                    else if(nums[t] + nums[r] < rem){
                        ++t;
                    }
                    else 
                        --r; 
                }
                while(j+1 < nums.size() and nums[j] == nums[j+1])++j;
            }
             while (i+1 < n && nums[i] == nums[i+1]) ++i;
        }
        return ans;
    }
};