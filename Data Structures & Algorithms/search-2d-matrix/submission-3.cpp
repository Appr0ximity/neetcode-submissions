class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int i = 0, j = m*n-1;
        while(i<=j){
            int mid = (i+j)/2;
            int mm = mid/n;
            int nn = mid%n;
            if(matrix[mm][nn] > target){
                j = mid - 1;
            }else if(matrix[mm][nn] < target){
                i = mid + 1;
            }else return true;
        }
        return false;
    }
};
