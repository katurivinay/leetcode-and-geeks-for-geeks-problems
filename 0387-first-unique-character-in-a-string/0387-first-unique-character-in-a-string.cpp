class Solution {
public:
    int firstUniqChar(string s) {
        int sz = s.size();
  int first_occurance = 0;
  unordered_map<char,int> ump;
  for(int i = 0 ; i < sz ; i++){
    ump[s[i]]+=1;
    if(ump[s[first_occurance]] > 1){
      first_occurance+=1;
      while(first_occurance < sz and ump[s[first_occurance]] > 1)first_occurance+=1;
      if(first_occurance == sz)return -1;
    }
  }
  return first_occurance;
    }
};