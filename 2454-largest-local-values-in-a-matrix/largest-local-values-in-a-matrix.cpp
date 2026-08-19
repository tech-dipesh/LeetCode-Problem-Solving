class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int size=grid.size();
        vector<vector<int>>output(size-2, vector<int> (size-2));
        // int max=grid[n-2][n-2];
        for(int i=2;i<size;i++){
            for(int j=2;j<size;j++){
            int maxv=0;
            for(int k=i-2;k<=i;k++){
                for(int l=j-2;l<=j;l++) maxv=max(maxv, grid[k][l]);
            
            }
            output[i-2][j-2]=maxv;
        }}
        return output;
    }
};