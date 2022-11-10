class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        for(int i = 0 ; i < s.size() ; i++){
            if(ans.size() == 0){
                ans += s[i];
            }
            else
            {
                if(s[i] == *(ans.end()-1))ans.pop_back();
                else ans += s[i];
            }
        }
        return ans;
    }
};