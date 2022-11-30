class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> ms;
        set<int> s;
        for(int i = 0 ; i < arr.size() ; i++){
            ms[arr[i]] += 1;
        }
        for(auto i :ms){
            if(s.find(i.second) != s.end())return false;
            else s.insert(i.second);
        }
        return true;
    }
};