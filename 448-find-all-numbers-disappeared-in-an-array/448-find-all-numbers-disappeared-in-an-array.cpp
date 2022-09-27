class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       int i = 0, current = 0,n = nums.size();
        while(i < n ){
            current = nums[i]-1;
            if(nums[i] != nums[current]){
                swap(nums[i],nums[current]);
            }
            else{
            i++;
            }
        }
        vector<int> ans;
        for(int i = 1 ; i <= n ; i++){
            if(nums[i-1] != i)ans.push_back(i);
        }
        return ans;
    }
};