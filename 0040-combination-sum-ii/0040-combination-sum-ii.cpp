class Solution {
public:
    void dfs(vector<int>& v , vector<vector<int>>& ans , int target , int &sum , int i , vector<int>& temp ,int n)
    {
        //cout<<sum<<"\n";
        if(sum > target)return;
        if(sum == target){
        ans.push_back(temp);
        return;
        }
        for(int ind = i ; ind < n ; ind++){
            if(ind > i and (v[ind] == v[ind-1]))continue;
            
            temp.push_back(v[ind]);
            sum +=v[ind];
            dfs(v , ans , target , sum , ind+1 , temp , n);
            sum-=v[ind];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& v, int target) {
        sort(begin(v),end(v));
        int n = v.size();
        vector<vector<int>> ans;
        vector<int> temp;
        int sum = 0;
        
        dfs(v , ans , target , sum , 0,temp ,n);

        return ans;
    }
};