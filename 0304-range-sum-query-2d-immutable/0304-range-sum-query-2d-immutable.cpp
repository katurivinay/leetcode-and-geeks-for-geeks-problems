class NumMatrix {
public:
     vector<vector<int>> summatrix;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        summatrix.resize(m+1);
        for(int i = 0 ; i <= m ; i++){
             summatrix[i].resize(n+1,0);
            for(int j = 0 ; j <= n ; j++){
                if(i == 0 || j == 0)continue;
                else
                {
                    summatrix[i][j] = summatrix[i][j-1] + summatrix[i-1][j] - summatrix[i-1][j-1] + matrix[i-1][j-1];
                }
            }
        }
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++,col1++,row2++,col2++;
        return summatrix[row2][col2] - summatrix[row2][col1-1] - summatrix[row1-1][col2] + summatrix[row1-1][col1-1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */