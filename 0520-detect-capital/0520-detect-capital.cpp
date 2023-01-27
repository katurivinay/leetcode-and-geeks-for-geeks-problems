class Solution {
public:
    bool detectCapitalUse(string word) {
        int total_count = 0;
        for(int i = 0 ; i < word.size() ; i++){
            if((((word[i] - 'A') >= 0) and (word[i] - 'A') < 26))total_count+=1;
        }
        if(total_count == word.size() || total_count == 0 || (total_count == 1 and (((word[0] - 'A') >= 0) and (word[0] - 'A') < 26)))return 1;
        else return 0;
    }
};