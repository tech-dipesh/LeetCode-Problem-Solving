class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bigg = *max_element(nums.begin(), nums.end());
        int second = INT_MIN;
        bool isseen = false;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == bigg && !isseen) {
                isseen = true;
                continue;
            }
            if (bigg >= nums[i] && second <= nums[i]) {
                second = nums[i];
            }
        }
        // return second;
     return (bigg-1)*(second-1); 
    }
};