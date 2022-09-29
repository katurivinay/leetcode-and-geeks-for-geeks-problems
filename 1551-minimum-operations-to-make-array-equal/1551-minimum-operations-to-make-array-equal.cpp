class Solution {
public:
    int minOperations(int n) {
         if(n == 1)return 0;
        int ans  =0 ;
        for(int i=0 ;i < n ; i++){
            int k = 2 * i + 1;
                ans += abs(n - k);
        }
        return ans/2;
    }
};