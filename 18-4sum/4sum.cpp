class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        sort(nums.begin(), nums.end());
        // Edge Case:
        if(nums.size()<4){
            return res;
        }
        for(int i=0;i<nums.size()-3;i++){
            // When There is duplicate elemetn on the outer loop
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<nums.size()-2;j++){
            // When There is duplicate elemetn on the inner loop
                if(j>i+1&& nums[j]==nums[j-1]){
                    continue;
                }
                    int left=j+1, right=nums.size()-1;
                    while(left<right){
                        long long sum=(long long)nums[left]+nums[right]+nums[i]+nums[j];
                        if(sum==target){
                            res.push_back({nums[left], nums[right], nums[i], nums[j]});
            // When There is duplicate elemetn on the two pointer loop
                        while(left<right && nums[left]==nums[left+1]){
                                    left++;
                                }
            // When There is duplicate elemetn on the two pointer loop
                        while(left<right && nums[right]==nums[right-1]){
                            right--;
                        }
                            left++;
                            right--;
                        }
                        else if(sum<target){
                        left++;
                        }
                        else{
                        right--;
                        }
                    }
            }
        }
        return res;
    }
};