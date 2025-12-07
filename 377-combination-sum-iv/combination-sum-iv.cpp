class Solution {
public:

    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1, -1);
        return Helper(nums, target, dp);
    }
    

    int Helper(vector<int>&nums, int target, vector<int>&dp){
            if(target==0)return 1;
            if(target<0) return 0;
            if(dp[target]!=-1) return dp[target];
            int sum=0;
            for(int i:nums){
                sum+=Helper(nums, target-i, dp);
            }
            return dp[target]=sum;
    }
};