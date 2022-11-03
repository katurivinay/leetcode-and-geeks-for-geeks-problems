class Solution {
private:
    void dfs(vector<vector<char>>& grid, int i , int j ){
        if((i<0) or (j<0) or (i > (grid.size()-1)) or (j > (grid[0].size()-1)))
            return;
        if(grid[i][j] == '1'){
            grid[i][j] = '0';
            dfs(grid , i+1 , j);
            dfs(grid , i-1 ,j);
            dfs(grid , i , j+1);
            dfs(grid , i , j-1);
        } else return;
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == '1'){
                    dfs(grid,i ,j);
                     count += 1;
                }
            }
        }
        return count;
    }
};

