class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // Brute Force Approach:
        int maxSize=0, left=0, right=0;
        while(right<nums.size()){
            if(nums[right]==1){
                int length=right-left+1;
                maxSize=max(length, maxSize);
            }
            else{
              left=right+1;
            }
              right++;
        }
        return maxSize;
    }
};