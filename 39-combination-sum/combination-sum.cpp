class Solution {
public:

    void Sum(vector<int>& comb, int i, int target, int n, vector<vector<int>>&vt, vector<int>&single){
        //   Base Cse with target become 0
            if(i==n){
                if(target==0){
                    vt.push_back(single);
                }
                return;
            }
            // Take Approach:
            if(comb[i]<=target){
            single.push_back(comb[i]);
            Sum(comb, i, target-comb[i], n, vt, single);
            single.pop_back();
            }
            // Take Back Approach:
            Sum(comb, i+1, target, n, vt, single);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int i=0, n=candidates.size();
        vector<vector<int>>res;
        vector<int>vt;
        Sum(candidates, i, target, n, res, vt);
        return res;
    }
};