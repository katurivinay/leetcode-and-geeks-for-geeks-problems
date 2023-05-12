class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& q) {
        int ans = 0;
        vector<int> sol , data(n , 0);
        for(int i = 0 ; i < q.size() ; i++){
                int j = q[i][0] , k = q[i][1];
                if(data[j] != 0 and ( j > 0 )){
                    if(data[j - 1] == data[j]){
                        if(ans > 0)  
                           ans--;
                    }
                }
                if(data[q[i][0]] != 0 and (q[i][0] < (n-1))){
                    
                    if(data[q[i][0] + 1] == data[q[i][0]]){
                        if(ans > 0)
                          ans--;
                    }
                }
                data[q[i][0]] = q[i][1];
                if(data[q[i][0]] != 0 and (q[i][0] > 0 and data[q[i][0] - 1] != 0 )){
                    if(data[q[i][0] - 1] == q[i][1])
                    {
                        
                          ans++;
                    }
                }
                if(data[q[i][0]] != 0 and (q[i][0] < (n-1) and data[q[i][0] + 1] != 0)){
                    if(data[q[i][0] + 1] == q[i][1])
                    ans+=1;
                }
                
            sol.push_back(ans);
        }
        return sol;
    }
};