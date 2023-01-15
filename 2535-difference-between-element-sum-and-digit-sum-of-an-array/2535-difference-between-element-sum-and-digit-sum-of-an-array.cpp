class Solution {
public:
    int differenceOfSum(vector<int>& a) {
         int sum = accumulate(a.begin(), a.end(), 0);
        int digi_sum=0;
        for(int i = 0  ;i < a.size(); i++){
            while(a[i] > 0){
                digi_sum += a[i]%10;
                a[i] = a[i]/10;
            }
        }
        return abs(digi_sum - sum);
    }
};