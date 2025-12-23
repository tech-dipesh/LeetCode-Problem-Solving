class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int Upper = 1, preFix = 0, r = 0;
        // Skip the first one:
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) Upper++;
            else {
                preFix = Upper;
                Upper = 1;
            }
            // bitwise
            int half = Upper >> 1;
            // Find min between the two:
            int m = min(preFix, Upper);
            int candidate= max(half, m);
            // Max Between the two
            r=max(r, candidate);
        }
        return r;
    }
};