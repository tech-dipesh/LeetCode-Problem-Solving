class Solution {
public:
    int Helper(vector<int>&nums, int target, int index){
        if(index<0){
            if(target!=0) return 0;
            else return 1;
        }
       return Helper(nums, target-nums[index], index-1)+Helper(nums, target+nums[index], index-1);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return Helper(nums, target, nums.size()-1);
    }
};
