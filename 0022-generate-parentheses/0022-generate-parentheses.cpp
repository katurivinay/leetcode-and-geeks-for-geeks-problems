class Solution {
public:
    vector<string> generateParenthesis(int n) {
        n += n;
        vector<string> ans;
        genpar(ans , "" , n , 0);
        return ans;
    }
    void genpar(vector<string> &ans , string temp , int n , int i){
        if( i >= n){
            //cout<<temp<<"\n";
            stack<int> s;
            for(int i = 0 ; i < n ; i++){
                if(temp[i] == '('){
                    s.push('(');
                }
                else{
                    if(s.size() == 0){
                        return ;
                    }
                    else {
                        char c = s.top();
                        if(c == ')'){
                           return ;
                        }
                        else s.pop();
                    }
                }
            }
            if(s.empty())
            ans.push_back(temp);
            return ;
        }
        temp.push_back('(');
        genpar(ans , temp , n , i+1);
        temp.pop_back();
        temp.push_back(')');
        genpar(ans , temp , n , i+1);
    }
};