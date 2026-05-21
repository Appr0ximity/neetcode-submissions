class NumMatrix {
public:

    vector<vector<int>> matrix;

    NumMatrix(vector<vector<int>>& matrix) {
        this->matrix = vector<vector<int>>(matrix.size()+1, vector<int>(matrix[0].size()+1, 0));
        for(int i =0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                this->matrix[i+1][j+1] = matrix[i][j]+this->matrix[i+1][j]+this->matrix[i][j+1]-this->matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans = this->matrix[row2+1][col2+1]-this->matrix[row2+1][col1]-this->matrix[row1][col2+1] + this->matrix[row1][col1];
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */