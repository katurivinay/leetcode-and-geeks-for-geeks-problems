class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
     vector<bool> v(people.size(),false);
     int ans = 0 , l = 0 , r = people.size()-1;
     while(l <= r){
         if(people[l] + people[r] <= limit){
             v[l] = true;
             v[r] = true;
             l+=1;
             r-=1;
             ans +=1;
         }
         else if(people[l] + people[r] > limit)r--;
         else l++;
     }
        for(int i = 0; i < people.size() ; i++){
            if(!v[i])ans += 1;
        }
        return ans;
    }
};