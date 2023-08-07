class Solution {
public:
    int maxDepth(string s) {
        //stack<char> para;
        int maxi = 0, cur = 0;
        for(char ch : s){
            if(ch == '('){
                //para.push(ch);
                cur++;
                maxi = max(maxi , cur);
                }
            if(ch == ')'){
                //para.pop();
                cur--;
            }
        }
        return maxi;
    }
};