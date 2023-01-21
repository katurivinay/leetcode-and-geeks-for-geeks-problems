class Solution {
public:

    int numOfPairs(vector<string>& nums, string target) {
        unordered_map<string,int> mp;

        for(auto n : nums)mp[n]++;

        int n = target.size();

        int ans = 0;

        for(int i =1;i<n;i++)
        {
            string a , b;
            a = target.substr(0,i);
            b = target.substr(i);
            if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end())
            {
                if(a==b)
                ans+=mp[a]*(mp[a]-1);
                else
                {
                    ans += (mp[a]*mp[b]);
                }

             
            }
        } 
        return ans;
    }
};