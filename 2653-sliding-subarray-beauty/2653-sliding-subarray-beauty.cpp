class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> v(51,0),ans;
        k--;
        for(int i = 0 ; i < nums.size() ; i++){
            
            if(nums[i] < 0)v[-nums[i]] +=1;
            
            if(i >= k){
                int count = 0;
                bool bad = true;
                for(int j = 50 ; j >= 1 ; j--){
                
                    if(v[j] != 0){
                        count+=v[j];
                        //cout<<v[j]<<":";
                    }
                    if(count >= x){
                        //cout<<count<<"";
                        ans.push_back(-j);
                        bad = false;
                        break;
                    }
                }
                //cout<<"\n"<<count<<"\n";
                if(bad)ans.push_back(0);
                if(nums[i-k] < 0)
                  v[-nums[i-k]]--;
            }
        }
        return ans;
    }
};