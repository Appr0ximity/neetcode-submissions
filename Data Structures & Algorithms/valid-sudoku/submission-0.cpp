class Solution {
public:
    bool checkCol (vector<vector<char>>& board, int col_no){
        map<char, int> mp;
        for(int i=0; i<board.size(); i++){
            if(board[i][col_no] != '.' && mp.find(board[i][col_no]) != mp.end()){
                return false;
            }
            mp[board[i][col_no]]++;
        }
        return true;
    }
    bool checkRow (vector<char>& row){
        map<char, int> mp;
        for(int i=0; i<row.size(); i++){
            if(row[i] != '.' && mp.find(row[i]) != mp.end()){
                return false;
            }
            mp[row[i]]++;
        }
        return true;
    }
    bool checkBox(vector<vector<char>>& box, int row, int col){
        map<char, int> mp;
        for(int i=row; i<=row+2; i++){
            for(int j=col; j<=col+2; j++){
                if(box[i][j] != '.' && mp.find(box[i][j]) != mp.end()){
                    return false;
                }
                mp[box[i][j]]++;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<board.size(); i++){
            if(!checkRow(board[i])){
                return false;
            }
            if(!checkCol(board, i)){
                return false;
            }
            if(i%3 == 0){
                if(!checkBox(board, i, 0)){
                    return false;
                }
                if(!checkBox(board, i, 3)){
                    return false;
                }
                if(!checkBox(board, i, 6)){
                    return false;
                }
            }
        }
        return true;
    }
};
