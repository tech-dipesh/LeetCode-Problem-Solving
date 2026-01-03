class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size=nums.size();
        int i=size-2, j;
        // keep decrease index until we don't find bigger element.
        while (i >= 0 && nums[i] >= nums[i + 1])i--;
        if (i < 0) {
            reverse(nums.begin(), nums.end());
            return;
        }
        j=size-1;
        while (j > i && nums[j] <= nums[i]) {
            j--;
        }
        swap(nums[i], nums[j]);
        reverse(nums.begin() + i + 1, nums.end());
    }
};