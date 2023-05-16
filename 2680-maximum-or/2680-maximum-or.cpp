#define ll long long
class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        ll n = nums.size() , ans = 0;
        vector<ll> pre(n,0) , suf(n,0);
        
        pre[0] = nums[0];
        suf[n-1] = nums[n-1];
        
        for(int i = 1 , j = n-2; i < n , j >= 0; i++ , j--){
            pre[i] = pre[i-1] | nums[i];
            suf[j] = suf[j+1] | nums[j];
            //cout<<pre[i]<< " "<< suf[j]<<"\n";
        }
        
        for(int i = 0 ; i < n ; i++){
            ll temp = 0 , kk = (1<<k);
           if( i > 0) temp |= pre[i-1];
           if(i < n-1)temp |= suf[i+1];
            //cout<< (ll)(nums[i])*kk << " ";                                   
           temp |= (ll)(nums[i])*kk;
            ans = max(ans , temp);
        }
        return ans;
    }
};