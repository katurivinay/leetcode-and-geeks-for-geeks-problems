class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        for(auto word : words){
                mp[word] +=1;
        }
        int ans = 0,rep = 0;
        for(auto [s,f] : mp){
            string temp = s;
            reverse(temp.begin(),temp.end());
            if(temp != s){
                if(mp.count(temp))
                ans += min(mp[temp],mp[s]);
            }
            else{
                ans += f;
                if(f & 1){
                    ans -= 1;
                    rep = 1;
                }
            }
        }
        ans += rep;
        return 2 * ans;
    }
};