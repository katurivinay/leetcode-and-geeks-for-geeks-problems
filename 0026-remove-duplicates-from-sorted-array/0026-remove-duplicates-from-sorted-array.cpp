class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1,n = nums.size();
        for(int i = 1; i < n ; i++){
            if(nums[i-1] != nums[i]){
                nums[k] = nums[i];
                k+=1;
            } 
        }
        return k;
    }
};