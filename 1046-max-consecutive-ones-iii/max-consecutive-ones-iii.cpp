class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // Optimal:
        int mSize=0, right=0, left=0, count=0;
      while(right<nums.size()){
        if(nums[right]==0){
            count++;
        }
        while(count>k){
            if(nums[left]==0){
                count--;
            }
            left++;
        }
        if(count<=k){
            mSize=max(mSize, right-left+1);
        }
        right++;
      }
        return mSize;
    }
};