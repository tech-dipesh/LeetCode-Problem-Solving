class Solution {
public:
   void Helper(int index, vector<vector<int>>&res,  vector<int>&vt, vector<int>&nums){
        if(index>=nums.size()){
                res.push_back(vt);
                return;
        }
        //Pick Approach:
        vt.push_back(nums[index]);
        Helper(index+1, res, vt, nums);
        // Not Pick Appraoch:
        vt.pop_back();
        Helper(index+1, res, vt, nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>vt;
        Helper(0, res, vt, nums);
        return res;
    }
};