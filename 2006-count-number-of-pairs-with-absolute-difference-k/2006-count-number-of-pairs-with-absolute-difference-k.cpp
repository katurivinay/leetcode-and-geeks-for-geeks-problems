class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int res1 = 0,res2 = 0;
        for(int i = 0; i < nums.size() ; i++){
            int ele1 = nums[i] - k;
            int ele2 = nums[i] + k;
            res1 += mp[ele1];
            res2 += mp[ele2];
            mp[nums[i]] += 1;
        }
        return res1 + res2;
    }
};