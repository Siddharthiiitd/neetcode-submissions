class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> cols, rows;
        map<pair<int,int>,unordered_set<char>> square;

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] == '.') continue;
                pair<int,int> sqkey = {i/3, j/3};

                if(rows[i].count(board[i][j]) || cols[j].count(board[i][j]) || square[sqkey].count(board[i][j])){
                    return false;
                }

                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                square[sqkey].insert(board[i][j]);
            }
        }

        return true;
    }
};
