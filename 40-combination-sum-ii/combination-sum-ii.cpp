class Solution {
public:

    void Comb(int index, int sum, vector<int>&candidates, int n,int target, vector<int>&single, vector<vector<int>>&vt){
     if(target==0){
    vt.push_back(single);
    return;
  }
  for(int i=index;i<candidates.size();i++){
      if(i >index && candidates[i]==candidates[i-1])continue;
      if(target<candidates[i])break;
      // Pick Recursion Call:
      single.push_back(candidates[i]);
      Comb(i+1, sum, candidates, n,  target-candidates[i], single, vt);
      single.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>single;
        vector<vector<int>>vt;
        int n=candidates.size();
        sort(candidates.begin(), candidates.end());
        Comb(0, 0, candidates, n, target, single, vt);
        return vt;
    }
};