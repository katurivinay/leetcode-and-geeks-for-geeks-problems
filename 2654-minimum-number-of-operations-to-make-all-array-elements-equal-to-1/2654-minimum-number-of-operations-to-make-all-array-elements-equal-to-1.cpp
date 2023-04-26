class Solution {
public:
    int minOperations(vector<int>& nums) {
        int gd = 0,on_count = 0;
        int n = nums.size();
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1)on_count += 1;
            gd = __gcd(gd,nums[i]);
        }
        if(gd > 1){
            return -1;
        }
        else{
            if (on_count >= 1)return (nums.size()-on_count);
            int res = 1e9;
            for(int i = 0 ;i < nums.size();i++){
                int g = nums[i];
                for(int j = i ; j < nums.size() ; j++){
                    g = __gcd(g,nums[j]);
                    if(g == 1){
                        res = min(res, (j - i) + (n - 1));
                    }
                }
            }
            return res;
        }
    }
};