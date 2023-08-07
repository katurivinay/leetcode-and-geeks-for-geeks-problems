class Solution {
public:
    int maxDepth(string s) {
        //stack<char> para;
        int max = 0, cur = 0;
        for(char ch : s){
            if(ch == '('){
                //para.push(ch);
                cur++;
            }
            if(max < cur){
                max = cur;
            }
            if(ch == ')'){
                //para.pop();
                cur--;
            }
        }
        return max;
    }
};