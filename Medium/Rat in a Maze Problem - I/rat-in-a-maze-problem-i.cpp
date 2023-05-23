//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void path(vector<vector<int>> &v , int n, vector<string>& ans , string s , int i ,int j , vector<vector<int>>& visited){
        if(i == n-1 and j == n-1){
            ans.push_back(s);
            return;
        }
        //down
        if(i+1 < n  and v[i+1][j] == 1 and !visited[i+1][j] )
        {
            visited[i][j] = 1;
            path(v, n , ans , s + 'D' , i+1 ,j , visited);
            visited[i][j] = 0;
        }
        //left
        if(j-1 >= 0  and i < n and v[i][j-1] == 1 and !visited[i][j-1] )
        {
            visited[i][j] = 1;
            path(v, n , ans , s + 'L' , i ,j-1 , visited);
            visited[i][j] = 0;
        }
        //right
        if(j+1 < n  and i < n and v[i][j+1] == 1 and !visited[i][j+1] )
        {
            visited[i][j] = 1;
            path(v, n , ans , s + 'R' , i ,j+1 , visited);
            visited[i][j] = 0;
        }
        //up
         if(i-1 >= 0  and j < n and v[i-1][j] == 1 and !visited[i-1][j] )
        {
            visited[i][j] = 1;
            path(v, n , ans , s + 'U' , i-1 ,j , visited);
            visited[i][j] = 0;
        }
    }
    public:
    vector<string> findPath(vector<vector<int>> &v, int n) {
        vector<string> ans;
        vector<vector<int>> visited(n , vector<int>(n , 0));
        if(!v[0][0]) return ans;
        path(v , n , ans , "", 0 , 0, visited);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends