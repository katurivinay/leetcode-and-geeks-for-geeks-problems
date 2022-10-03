class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
     int i = 0 , j = 0;
        int ans = 0;
        while(i < colors.size()){
            int sum = 0;
            priority_queue<int> pp ;
            while(j < colors.size() and colors[j] == colors[i]){
                pp.push(neededTime[j]);
                sum += neededTime[j];
                j+=1;
            }
            i = j;
            sum = sum - pp.top();
            ans += sum;
        }
        return ans;
    }
};