class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // First sort the element o(nlogn) and just return the half index array element
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};