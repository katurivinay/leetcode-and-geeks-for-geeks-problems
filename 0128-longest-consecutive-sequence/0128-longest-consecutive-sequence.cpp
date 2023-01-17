class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int ans = 1;
        // for(int i = 0; i < nums.size(); i++){
        //     int pos = i+1;
        //     while(pos < nums.size() and i > 0 and abs(nums[i] - nums[i-1]) == 1 ){
        //         pos+=1;
        //     }
        //     if(i == 0){
        //         ans = max(ans,(pos - 1));
        //     }
        //     else{
        //     ans = max(ans,(pos - (i)));
        //     }
        //     i = pos ;
        // }
        // return ans;
        unordered_map<int,bool> present,check;
        for(int i =0 ;  i < nums.size(); i++){
            present[nums[i]] = true;
        }
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(!present[nums[i] - 1]  and !check[nums[i]]){
                check[nums[i]] = true;
                int p = nums[i];
                while(present[p]){
                    p+=1;
                    check[nums[i]] = true;
                }
                ans = max(ans,p - nums[i]);
            }
        }
        return ans;
    }
};