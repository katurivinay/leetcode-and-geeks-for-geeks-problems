class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp.find(target - nums[i]) != mp.end()){
                cout<<i<<": "<<mp[target - nums[i]];
                int k = mp[target - nums[i]];
                return {i,k};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};