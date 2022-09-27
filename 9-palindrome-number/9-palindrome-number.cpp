class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int i = 0 , r=s.size()-1;
        while(i <= r)
        {
            if(s[i] != s[r])return 0;
            i++,r--;
        }
        return 1;
    }
};