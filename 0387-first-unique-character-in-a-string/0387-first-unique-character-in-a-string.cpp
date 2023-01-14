class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;
        int n = s.size();
        for(int i = 0 ; i < n  ; i++)
        {
            mp[s[i]] += 1;
        }
        for(int i = 0 ; i < n ; i++){
            if(mp[s[i]] < 2)return i;
        }
        return -1;
    }
};