class Solution {
public:
bool isQueenSafe(int row, int column, vector<string>&board, int n) {
    // .  . .
    // . . .
    // . . .
    //       .
    // <- and . and .
    //                .

    // Left Side
    int doesRow = row;
   int doesColumn = column;
    while(doesColumn>=0) {
        if(board[doesRow][doesColumn--] == 'Q') return false;
    }


    // Top Left Side
    doesRow = row;
    doesColumn = column;
    while(doesRow>=0 && doesColumn>=0) {
        if(board[doesRow--][doesColumn--] == 'Q') return false;
    }

    // Bottom Left:
    doesRow = row;
    doesColumn = column;
    while(doesRow < n && doesColumn>=0) {
        if(board[doesRow++][doesColumn--] == 'Q') return false;
    }
    return true;

}
void Helper(int column, vector<vector<string>>&res, vector<string>&board, int n) {
    // Base Case:
    if(column == n) {
        res.push_back(board);
        return;
    }

    for(int row = 0;row < n;row++) {
        if(isQueenSafe(row, column, board, n)) {
        // Take Approach
            board[row][column] = 'Q';
        // Not Take Approach
            Helper(column + 1, res, board, n);
            board[row][column] = '.';
        }
    }
}

    vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>>res;
    // Set the board value to . by default.
    vector<string>board(n, string(n, '.'));
    // Settting by default 0 on board.

    Helper(0, res, board, n);
    return res;
        
    }
};