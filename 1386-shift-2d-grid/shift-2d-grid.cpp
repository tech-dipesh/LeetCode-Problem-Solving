class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> res=grid;
        // int i=0,
        // while(k--){
        int rows = grid.size();
        int cols = grid[0].size();
        int n = rows * cols;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
            //     int old_1d = i * cols + j; 
            
            // // Shift and handle wrapping
            // int new_1d = (old_1d + k) % total_elements;
                int old = i * cols + j;
                int newval = (old + k) % n;
                int newrol = newval / cols;
                int newcol = newval % cols;
                res[newrol][newcol] = grid[i][j];
            }
        }
        // }
        return res;
    }
};