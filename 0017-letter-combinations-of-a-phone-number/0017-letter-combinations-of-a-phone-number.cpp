class Solution {
public:
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans , data;
        string temp = "";
        data.push_back("abc");
        data.push_back("def");
        data.push_back("ghi");
        data.push_back("jkl");
        data.push_back("mno");
        data.push_back("pqrs");
        data.push_back("tuv");
        data.push_back("wxyz");
        if(digits == "") return ans;
        dfs(ans ,  "" , 0 , digits , data );
        return ans;
    }
    
    void dfs(vector<string> &ans , string temp , int i , string digits , vector<string> data){
        if(i >= (int)digits.size()){
            ans.push_back(temp);
            return ;
        }
        temp.push_back(data[ (digits[i] - '0') - 2][0]);
        dfs(ans , temp , i+1 , digits , data);
        temp.pop_back();
        temp.push_back(data[ (digits[i] - '0') - 2][1]);
        dfs(ans , temp , i+1 , digits , data);
        temp.pop_back();
        temp.push_back(data[ (digits[i] - '0') - 2][2]);
        dfs(ans , temp , i+1 , digits , data);
        if( ((digits[i] - '0') == 7) or ((digits[i] - '0') == 9) ){
            temp.pop_back();
            temp.push_back(data[ (digits[i] - '0') - 2][3]);
            dfs(ans , temp , i+1 , digits , data);
        }
    }
};