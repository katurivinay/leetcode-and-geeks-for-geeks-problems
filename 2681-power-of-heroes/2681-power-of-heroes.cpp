#define ll long long
int M = 1000000007;
class Solution {
public:
    int sumOfPower(vector<int>& nums) {
        ll n = nums.size();
        sort(nums.begin() , nums.end());
        
        ll ans = 0 , sum = 0;
        for(int i = 0 ; i < n ; i++){
            ans = (ans +  (sum + nums[i]) % M * nums[i] % M * nums[i] % M ) % M;
            sum = (sum * 2 + nums[i] ) % M;
        }
        return ans;
    }
};