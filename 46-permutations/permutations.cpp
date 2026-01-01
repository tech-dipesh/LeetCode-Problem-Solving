class Solution {
public:
    void Res(int index, vector<int>&nums, vector<vector<int>>&res){
        // No Space Appraoch:
        vector<int>vt;
        if(index==nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[i], nums[index]);
            Res(index+1, nums, res);
            swap(nums[i], nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        Res(0, nums, res);
        return res;
    }
};