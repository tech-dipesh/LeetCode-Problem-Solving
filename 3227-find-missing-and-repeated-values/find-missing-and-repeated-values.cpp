class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        // int r[2]={};
        
        int n=grid.size();
        int size=n*n;
        vector<int>total(size+1, 0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                total[grid[i][j]]++;
            }
            int first=-1, last=-1;
            for(int i=1;i<=size;i++){
                if(total[i]==2) first=i;
                else if(total[i]==0) last=i;
            }
            return {first, last};
        // return r;
    }
};