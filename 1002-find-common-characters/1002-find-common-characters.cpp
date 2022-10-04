class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>util(26,INT_MAX);
		for(auto it:words){
			vector<int>v(26,0);
			for(auto t:it) v[t-'a']++;
			for(int i=0;i<26;i++) util[i] = min(util[i],v[i]);
		}
		vector<string>ans;
		for(int i=0;i<26;i++){
            //cout<<string(1,i+'a')<<" ";
            cout<<util[i]<<" ";
			while(util[i]--) ans.push_back(string(1,i+'a'));
		}
		return ans;
    }
};