class Solution {
public:
    int findMin(vector<int>& nums) {
        int minimum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(minimum>nums[i])
                minimum=min(minimum, nums[i]);
                // minimum=nums[i];
        }   
        return minimum;
        // return min_element(nums.begin(), nums.end());
    }
};