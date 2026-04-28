class Solution {
public:
    bool grid3(int row, int column, vector<vector<char>>&board, char value){
        //checking the grid 3*3 size where is that value exist on grid or not.
         int startRow=(row/3)*3, startColumn=(column/3)*3;
        for(int i=startRow;i<startRow+3;i++){
            for(int j=startColumn;j<startColumn+3;j++){
                if(board[i][j]==value) {
                    return true;
                }
            }
        }
        return false;
    }
    bool safeAdd(vector<vector<char>>&board, int row, int column, char value){
    //    Whether On Row and column exist or not:
    for(int i=0;i<9;i++){
        //Row Check
        if(board[i][column]==value){
            return false;
        }
        // Column Check
        if(board[row][i]==value){
            return false;
        }
    }
        // Grid 3 check
    if(grid3(row, column, board, value)){
            return false;
        }
    return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                // Checking is that need to add
                if(board[i][j]=='.'){
                    // i've to take as a char not as a int
                    for(char k='1';k<='9';k++){
                        if(safeAdd(board, i, j, k)){
                            // Take Approach
                            board[i][j]=k;
                            if(isValidSudoku(board)){
                                return true;
                            }
                            else{
                                // Non Take Approach:
                                board[i][j]='.';
                            }
                        }
                    }
                    return false;
                    //go back if not true:
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        isValidSudoku(board);
    }
};