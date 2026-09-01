class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int>output;
        for(int i=0;i<nums.size();i++){
            if(output.count(nums[i]) && (i-output[nums[i]]<=k)) return true;
            output[nums[i]]=i;
        }
        return false;
    }
};