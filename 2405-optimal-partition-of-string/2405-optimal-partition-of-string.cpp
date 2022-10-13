class Solution {
public:
    int partitionString(string word) {
     int ans = 1;
        set<char> s;
     for(int i = 0 ; i < word.size() ; i++){
         if(s.find(word[i]) != s.end()){
             ans += 1;
             s.clear();
         }
         s.insert(word[i]);
     }
        return ans;
    }
};