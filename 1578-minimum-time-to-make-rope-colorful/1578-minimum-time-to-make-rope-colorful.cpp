class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i = 0 , j = 0;
        int ans = 0;
        while(i < colors.size() and j < colors.size()){
            int sum = 0;
            int maxi = 0;
            while(j < colors.size() and colors[j] == colors[i]){
                sum += neededTime[j];
                maxi = max(maxi,neededTime[j]);
                j++;
            }
            ans += (sum-maxi);
            i = j;
        }
        return ans;
    }
};