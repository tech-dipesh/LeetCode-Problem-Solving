class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        // Greedy Appraoch
        sort(nums.begin(), nums.end());
      int left=0, total=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>(long)nums[left]*k){
                left++;
            }
            total=max(total, i-left+1);
      }
      return nums.size()-total;
    }
};