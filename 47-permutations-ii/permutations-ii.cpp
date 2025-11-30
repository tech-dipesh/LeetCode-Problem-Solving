class Solution {
public:

    void Helper(int index, vector<vector<int>>&res, vector<int>&nums){
        if(index==nums.size()){
            res.push_back(nums);
            return;
        }
        unordered_set<int>st;
        for(int i=index;i<nums.size();i++){
            if(st.count(nums[i])) continue;

            st.insert(nums[i]);

            // Take:
            swap(nums[i], nums[index]);
            Helper(index+1, res, nums);

            // Non Take:
            swap(nums[i], nums[index]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>res;
        Helper(0, res, nums);
        return res;
    }
};